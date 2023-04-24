#include "main.h"
/**
 * type_binary - the unsigned int argument
 * is converted to binary
 * @args: arg point to the num to be converted.
 * Return: length of num.
 */
int type_bin(va_list args)
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
			len++, n /= 2;
		cp = malloc(sizeof(int) * len);
		if (!cp)
			return (0);
		for (i = 0; i < len; i++)
			cp[i] = '0' + (num % 2), num /= 2;
		for (i = (len - 1); i >= 0; i--)
			count += _putchar(cp[i]);
	free(cp);
	}
	return (count);
}
