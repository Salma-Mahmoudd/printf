#include "main.h"
/**
 * reversed_string - function that reverse a string
 * @args: input
 * Return: int
 */
int reversed_string(va_list args)
{
	char *str;
	char *rev_str;
	int i = 0, j = 0, count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; i < 6; i++)
			 _putchar(str[i]);
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
		count++;
	rev_str = malloc(count);
	if (rev_str == NULL)
		return(0);

	for (i = count - 1; i >= 0; i--)
	{
		rev_str[i] = str[j];
		j++;
	}
	for (j = 0; j < count; j++)
		_putchar(rev_str[j]);
	free(rev_str);
	return (count);
}
