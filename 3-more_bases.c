#include "main.h"
/**
 * type_uint - unsigned decimal (base 10) number.
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_uint(va_list args)
{
	unsigned int i, digit, num, num_digits = 0;
	int count = 0, place_value = 1;

	num = va_arg(args, unsigned int);
	if (num <= 9)
		return (_putchar('0' + num));
	i = num;
	while (i != 0)
	{
		i = i / 10;
		num_digits++;
		if (i >= 1)
			place_value = place_value * 10;
	}
	for (i = 0; i < num_digits; i++)
	{
		digit = num / place_value;
		num -= digit * place_value;
		place_value /= 10;
		count += _putchar('0' + digit);
	}
	return (count);
}
/**
 * type_oct - a number in octal (base 8).
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_oct(va_list args)
{
	int i, count = 0, len = 0;
	unsigned int n, num;
	int *cp;

	num = va_arg(args, unsigned int);
	n = num;
	if (num == 0)
		count += _putchar('0' + 0);
	else
	{
		while (n != 0)
			len++, n /= 8;
		cp = malloc(sizeof(int) * len);
		if (!cp)
			return (0);
		for (i = 0; i < len; i++)
			cp[i] = '0' + (num % 8), num /= 8;
		for (i = (len - 1); i >= 0; i--)
			count += _putchar(cp[i]);
	free(cp);
	}
	return (count);
}
/**
 * type_hex - a number in hexidecimal (base 16).
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_hex(va_list args)
{
	int i, count = 0, len = 0;
	unsigned int n, num;
	int *cp;
	char x;

	num = va_arg(args, unsigned int);
	n = num;
	if (num == 0)
		count += _putchar('0' + 0);
	else
	{
		while (n != 0)
			len++, n /= 16;
		cp = malloc(sizeof(int) * len);
		if (!cp)
			return (0);
		for (i = 0; i < len; i++)
		{
			x = '0' + (num % 8);
			if ((num % 16 > 9) && (num % 16 < 16))
				x = 'a' + (num % 16);
			cp[i] = x, num /= 16;
		}
		for (i = (len - 1); i >= 0; i--)
			count += _putchar(cp[i]);
	free(cp);
	}
	return (count);
}
/**
 * type_HEX - a number in hexidecimal (base 16).
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_HEX(va_list args)
{
	int i, count = 0, len = 0;
	unsigned int n, num;
	int *cp;char x;

	num = va_arg(args, unsigned int);
	n = num;
	if (num == 0)
		count += _putchar('0' + 0);
	else
	{
		while (n != 0)
			len++, n /= 16;
		cp = malloc(sizeof(int) * len);
		if (!cp)
			return (0);
		for (i = 0; i < len; i++)
		{
			x = '0' + (num % 8);
			if ((num % 16 > 9) && (num % 16 < 16))
				x = 'A' + (num % 16);
			cp[i] = x, num /= 16;
		}
		for (i = (len - 1); i >= 0; i--)
			count += _putchar(cp[i]);
		free(cp);
	}
	return (count);

