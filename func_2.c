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
/**
 * p_int_u - prints unsigned int
 * @ap: arg
 * Return: Num of chars printed
 */
int p_int_u(va_list ap)
{
	int res = 0;
	signed int val;

	val = va_arg(ap, unsigned int);
	print(val);
	if (val < 0)
	{
		val = -val;
	}
	do {
		val /= 10;
		res++;
	} while (val != 0);
	return (res);
}
/**
 * p_dec_oct - prints unsigned int
 * @ap: arg
 * Return: Num of chars printed
 */
int p_dec_oct(va_list ap)
{
	int octalNumber = 0, i = 1, res = 0;
	unsigned int decimalNumber;

	decimalNumber = va_arg(ap, unsigned int);

	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}
	print(octalNumber);
	do {
		octalNumber /= 10;
		res++;
	} while (octalNumber != 0);
	return (res);
}
/**
 * p_dec_hex - prints unsigned int
 * @ap: arg
 * Return: Num of chars printed
 */
int p_dec_hex(va_list ap)
{
	int hNum[100];
	int j = 0, i = 0, temp;
	unsigned int num;

	num = va_arg(ap, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for ( ; num > 0; )
	{
		temp = num % 16;
		if (temp < 10)
		{
			temp += 48;
		}
		else
		{
			temp += 87;
		}
		hNum[i++] = temp;
		num /= 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hNum[j]);
	}
	return (i);
}
