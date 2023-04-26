#include "main.h"
/**
 * type_lint - prints integer
 * @args: points to the integer to be printed
 * Return: int
 */
int type_lint(va_list args)
{
	long int i, digit, num;
	long int place_value = 1;
	long int num_digits = 0, count = 0, of = 0;

	num = va_arg(args, long int);
	if (num < 0)
	{
		count += _putchar('-');
		if ((num + 1) * -1 > 9)
			of = 1, num += 1;
		num = num * -1;
	}
	if (num <= 9)
	{
		count += _putchar('0' + num);
		return (count);
	}
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
		if (i == (num_digits - 1) && of == 1)
		{
			count += _putchar('0' + (digit + 1));
			return (count);
		}
		count += _putchar('0' + digit);
	}
	return (count);
}
/**
 * type_luint - unsigned decimal (base 10) number.
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_luint(va_list args)
{
	unsigned long int i, digit, num, num_digits = 0, place_value = 1;
	long int count = 0;

	num = va_arg(args, unsigned long int);
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
 * type_loct - a number in octal (base 8).
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_loct(va_list args)
{
	long int i, count = 0, len = 0;
	unsigned long int n, num;
	long int *cp;

	num = va_arg(args, unsigned long int);
	n = num;
	if (num == 0)
		count += _putchar('0' + 0);
	else
	{
		while (n != 0)
			len++, n /= 8;
		cp = malloc(sizeof(long int) * len);
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
 * type_lhex - a number in hexidecimal (base 16).
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_lhex(va_list args)
{
	long int i, count = 0, len = 0;
	unsigned long int n, num;
	long int *cp;
	char x;

	num = va_arg(args, unsigned long int);
	n = num;
	if (num == 0)
		count += _putchar('0' + 0);
	else
	{
		while (n != 0)
			len++, n /= 16;
		cp = malloc(sizeof(long int) * len);
		if (!cp)
			return (0);
		for (i = 0; i < len; i++)
		{
			x = '0' + (num % 16);
			if ((num % 16 > 9) && (num % 16 < 16))
				x = 'a' + ((num % 16) % 10);
			cp[i] = x, num /= 16;
		}
		for (i = (len - 1); i >= 0; i--)
			count += _putchar(cp[i]);
	free(cp);
	}
	return (count);
}
/**
 * type_lHEX - a number in hexidecimal (base 16).
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_lHEX(va_list args)
{
	long int i, count = 0, len = 0;
	unsigned long int n, num;
	long int *cp;
	char x;

	num = va_arg(args, unsigned long int);
	n = num;
	if (num == 0)
		count += _putchar('0' + 0);
	else
	{
		while (n != 0)
			len++, n /= 16;
		cp = malloc(sizeof(long int) * len);
		if (!cp)
			return (0);
		for (i = 0; i < len; i++)
		{
			x = '0' + (num % 16);
			if ((num % 16 > 9) && (num % 16 < 16))
				x = 'A' + ((num % 16) % 10);
			cp[i] = x, num /= 16;
		}
		for (i = (len - 1); i >= 0; i--)
			count += _putchar(cp[i]);
		free(cp);
	}
	return (count);
}
