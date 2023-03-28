#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * p_char - prints char
 * @ap: arg
 * Return: Nothing
 */
void p_char(va_list ap)
{
	_putchar(va_arg(ap, int));
}

/**
 * p_int - prints int
 * @ap: arg
 * Return: Nothing
 */
void p_string(va_list ap)
{
	char *s;
	int i;

	s = va_arg(ap, char *);
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
