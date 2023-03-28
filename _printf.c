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
	while (format[i] != '\0')
	{
		if (check == 1)
		{
			if (*get_op_func(format + i) != NULL)
			{
				get_op_func(format + i)(ap);
			}
			check = 0;

		}
		else if (format[i] == '%' && (check == 0))
		{
			check = 1;
		}
		else if (format[i] == '%' && (check == 1))
		{
			_putchar('%');
			sum++;
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
		i++;
	}
	va_end(ap);
	return (sum);
}
