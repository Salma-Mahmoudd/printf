#include "main.h"
/**
 * type_char - prints a char.
 * @args: arg point to the char to be printed.
 * Return: length of char
 */
int type_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * type_string - prints a string.
 * @args: arg point to the string to be printed.
 * Return: length of string
 */
int type_string(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _escape - escape character to change
 * the meaning of the next character
 * @c: the char to be changed.
 * Return: length of what will be printed
 */
int _escape(char c)
{
	if (c == 'n')
	{
		_putchar('\n');
		return (0);
	}
	else if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	else if (c == 92)
	{
		_putchar(92);
		return (1);
	}
	return (0);
}
/**
 * _printf - produces output according to a format.
 * @format:  a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	type x[] = {
		{"c", type_char},
		{"s", type_string},
		{NULL, NULL}
	};
	int i = 0, j = 0, count = 0;
	va_list args;

	va_start(args, format);
	while (format && (*(format + j)))
	{
		if (format[j] == '%')
		{
			i = 0;
			j++;
			if (format[j] == '%')
				count += _putchar(format[j]);
			else
			{
				while (x[i].typ && (*(x[i].typ) != format[j]))
					i++;
				if (x[i].typ)
					count += x[i].fn(args);
				else
				{
					count += _putchar(format[--j]);
				}
			}
		}
		else if (format[j] == '\\')
			count += _escape(format[++j]);
		else
			count += _putchar(format[j]);
		j++;
	}
	va_end(args);
	return (count);
}
