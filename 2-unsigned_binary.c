#include "main.h"
/**
 * type_binary - the unsigned int argument
 * is converted to binary
 * @args: arg point to the num to be converted.
 * Return: length of num.
 */
int type_bin(va_list args)
{
	int n, count = 0, len = 0;
	unsigned int num;
	int *cp;

	num = va_arg(args, unsigned int);
	n = (int)num;
	if (num == 0)
		count += _putchar('0' + 0);
	else
	{
		while (n != 0)
			len++, n /= 2;
		cp = malloc(sizeof(int) * len);
		for (n = 0; n < len; n++)
			cp[n] = num % 2, num /= 2;
		for (n = (len - 1); n >= 0; n--)
			count += _putchar('0' + cp[n]);
	}
	return (count);
}
