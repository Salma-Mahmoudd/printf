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
		if (((str[j] > 0) && (str[j] < 32)) || str[j] >= 127)
			{
				_putchar('\\');
				_putchar('x');
				type_HEX(str[i]);
			}
		else
			_putchar(str[i]);
	}
	return (count);
}
