#include "main.h"
/**
 * type_string_cap - function that handles string input
 * @args: string to be printed
 * Return: int
 */
int type_string_cap(va_list args)
{
	char *str;
	int i = 0, j = 0, count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; i < 6; i++)
			count += _putchar(str[i]);
		return (count);
	}
	while (str[count] != '\0')
		count++;
	j = count;
	for (i = 0; i < j; i++)
	{
		if (((str[i] > 0) && (str[i] < 32)) || str[i] >= 127)
				count += 3;
	}

	for (i = 0; i < j; i++)
	{
		if (((str[i] > 0) && (str[i] < 32)) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			HEX_char(str[i]);
		}
		else
			_putchar(str[i]);
	}
	return (count);
}

void HEX_char(char str)
{
	int i, count = 0, len = 0;
	int n, num;
	int *cp;
	char x;
	
	num = (int)str;
	n = num;

		while (n != 0)
			len++, n /= 16;
		cp = malloc(sizeof(int) * len);
		if (!cp)
			return;
		for (i = 0; i < len; i++)
		{
			x = '0' + (num % 16);
			if ((num % 16 > 9) && (num % 16 < 16))
				x = 'A' + ((num % 16) % 10);
			cp[i] = x, num /= 16;
		}
		for (i = (len - 1); i >= 0; i--)
			if (len == 1)
				count +=  _putchar('0') +  _putchar(cp[i]);
			else
				count += _putchar(cp[i]);
		free(cp);

}
