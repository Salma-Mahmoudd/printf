#include "main.h"

/**
 * type_pointer - prints pointers
 * @args: pointer to be printed
 * Return: int
 */
int type_pointer(va_list args)
{
	char *str;
	unsigned long int out;
	int count = 0, i = 0;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(nill)";
		for (i = 0; i < 6; i++)
			count += _putchar(str[i]);
		return (count);
	}
	for (i = 0; str[i] != '\0'; i++)
		count++;
	out = (unsigned long int)str;

	_putchar('0');
	_putchar('x');

	 HEX_char_p(out);

	return (count + 2);
}
/**
 * HEX_char_p - function
 * @str: input
 * Return: void
 */
void HEX_char_p(unsigned long int str)
{
	int i = 0, count = 0, len = 0;
	unsigned long int n, num;
	int *cp;
	char x;

	num = str;
	n = num;

		while (n != 0)
			len++, n /= 16;
		cp = malloc(sizeof(unsigned long int) * len);
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
