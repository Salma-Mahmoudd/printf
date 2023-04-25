#include "main.h"
/**
 * type_string - function that handles string input
 * @args: string to be printed
 * Return: int
 */
char *type_string(va_list args)
{
	char *str;
	int i = 0, j;
	char *out = NULL;
	char *ptr;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
		i++;
	
	ptr = malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		out += _putchar (str[j] + '0');
	return (out);
}
