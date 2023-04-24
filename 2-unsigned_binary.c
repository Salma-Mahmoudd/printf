#include "main.h"
/**
 * type_binary - the unsigned int argument
 * is converted to binary
 * @args: arg point to the num to be converted.
 * Return: length of num.
 */
int type_bin(va_list args)
{
	int i = 1, count = 0, zeros = 0;
	unsigned int num;

	num = va_arg(args, unsigned int);
	if (num == 0)
		count += _putchar('0' + 0);
	else
	{
		while (num % 2 == 0)
			num /= 2, zeros++;
		while (num != 0)
		{
			num /= 2;
			if (num % 2 == 0)
				i = i * 10;
			else
				i = i * 10 + 1;
		}
		while (i % 10 == 0)
			i /= 10;
		while (i != 0)
			count += _putchar('0' + (i % 10)), i /= 10;
		while (zeros != 0)
			zeros--, count += _putchar('0' + 0);
	}
	return (count);
}
