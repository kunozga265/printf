#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * p_dec_bin - prints unsigned int
 * @ap: arg
 * Return: Num of chars printed
 */
int p_dec_bin(va_list ap)
{
	int bNum[32];
	int j = 0, i = 0;
	unsigned int num;

	num = va_arg(ap, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for ( ; num > 0; )
	{
		bNum[i++] = num % 2;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bNum[j] + '0');
	}
	return (i);
}
