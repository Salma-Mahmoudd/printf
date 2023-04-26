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
 * type_uint - unsigned decimal (base 10) number.
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_luint(va_list args)
{
	long unsigned int i, digit, num, num_digits = 0, place_value = 1;
	long int count = 0;

	num = va_arg(args, long unsigned int);
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
int type_loct(va_list args)
{
	long int i, count = 0, len = 0;
	long unsigned int n, num;
	long int *cp;

	num = va_arg(args, long unsigned int);
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
 * type_hex - a number in hexidecimal (base 16).
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_lhex(va_list args)
{
	long int i, count = 0, len = 0;
	long unsigned int n, num;
	long int *cp;
	char x;

	num = va_arg(args, long unsigned int);
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
 * type_HEX - a number in hexidecimal (base 16).
 * @args: points to the integer to be printed.
 * Return: length of num.
 */
int type_lHEX(va_list args)
{
	long int i, count = 0, len = 0;
	long unsigned int n, num;
	long int *cp;
	char x;

	num = va_arg(args, long unsigned int);
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
/**
 * _long - take long numbers
 * @args: arg point to the string to be printed.
 * @next: nesxt char of format.
 * Return: length of what will be printed
 */
int _long(va_list args, char next)
{
	long int count = 0;

	if (next == 'd' || next == 'i')
		count += type_lint(args);
	else if (next == 'u')
		count += type_luint(args);
	else if (next == 'o')
		count += type_loct(args);
	else if (next == 'x')
		count += type_lhex(args);
	else if (next == 'X')
		count += type_lHEX(args);
	else
		return (0);
	return (count);
}
