#include "main.h"
/**
 * type_int - prints integer
 * @args: points to the integer to be printed
 * Return: int
 */
int type_int(va_list args)
{
	int i, digit, num;
	int place_value = 1;
	int num_digits = 0, count = 0, of = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		count += _putchar('-');
		if ((num + 1) * -1 == 2147483647)
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
