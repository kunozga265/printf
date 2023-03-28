#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * p_char - prints char
 * @ap: arg
 * Return: Nothing
 */
int p_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * p_string - prints string
 * @ap: arg
 * Return: Nothing
 */
int p_string(va_list ap)
{
	char *s;
	int i;

	s = va_arg(ap, char *);
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
