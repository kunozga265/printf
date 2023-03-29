#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * p_char - prints char
 * @ap: arg
 * Return: Num of chars printed
 */
int p_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * p_string - prints string
 * @ap: arg
 * Return: Num of chars printed
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
/**
  * print - prints numbers
  * @n: number
  * Return: Nothing
  */
void print(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * p_int - prints int
 * @ap: arg
 * Return: Num of chars printed
 */
int p_int(va_list ap)
{
	int res = 0;
	int val;

	val = va_arg(ap, int);
	print(val);
	do {
		val /= 10;
		res++;
	} while (val != 0);
	return (res);
}
/**
 * p_int_s - prints unsigned int
 * @ap: arg
 * Return: Num of chars printed
 */
int p_int_s(va_list ap)
{
	int res = 0;
	signed int val;

	val = va_arg(ap, signed int);
	print(val);
	do {
		val /= 10;
		res++;
	} while (val != 0);
	return (res);
}
