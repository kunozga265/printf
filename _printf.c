#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf- prints all args
 * @format: pointer
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, sum = 0, check = 0;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (check == 1)
		{
			if (*get_op_func(format + i) != NULL)
			{
				sum += get_op_func(format + i)(ap);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				sum++;
			}
			check = 0;

		}
		else if (format[i] == '%' && (check == 0))
		{
			check = 1;
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(ap);
	return (sum);
}
