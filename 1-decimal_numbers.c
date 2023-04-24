#include "main.h"
/**
 * type_int - prints integer
 * @args: points to the integer to be printed
 * Return: int
 */
int type_int(va_list args)
{
	int num;
	int place_value;
	int count = 0;
	int i, num_digits = 0, digit;

	num = va_arg(args, int);

	if (num < 0)
	{
		count = count +  _putchar('-');
		num = num * -1;
	}
	place_value = 1;

	if (num <= 9)
	{
		count = count +  _putchar('0' + num);
		return (count);
	}
	i = num;
	while (i != 0)
	{
		i = i / 10;
		num_digits++;
	}
	for (i = 1; i < num_digits; i++)
	{
		place_value = place_value * 10;
	}
	for (i = 0; i < num_digits; i++)
	{
		digit = num / place_value;
		num -= digit * place_value;
		place_value /= 10;
		count = count +  _putchar('0' + digit);
	}
	return (count);
}
