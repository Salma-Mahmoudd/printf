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
 * _percent - check for % char
 * @k_1: char to be checked
 * @k: second char
 * @args: arg point to the string to be printed.
 * Return: length of what will be printed
 */
int _percent(char k_1, char k, va_list args)
{
	type x[] = {
		{"c", type_char},
		{"s", type_string},
		{"d", type_int},
		{"i", type_int},
		{"b", type_bin},
		{"u", type_uint},
		{"o", type_oct},
		{"x", type_hex},
		{NULL, NULL}
	};
	int i = 0, count = 0;

	if (k == '\0')
		return (-1);
	else if (k == '%')
		count += _putchar(k);
	else
	{
		while (x[i].typ && (*(x[i].typ) != k))
			i++;
		if (x[i].typ)
			count += x[i].fn(args);
		else
		{
			count += _putchar('%');
			if (k_1 == ' ')
				count += _putchar(' ');
			count += _putchar(k);
		}
	}
	return (count);
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
 * _printf - produces output according to a format.
 * @format:  a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0;
	va_list args;

	va_start(args, format);
	while (format && (*(format + j)))
	{
		if (format[j] == '%')
		{
			j++;
			while (format[j] == ' ')
				j++;
			i = _percent(format[j - 1], format[j], args);
			if (i == -1)
				return (-1);
			count += i;
		}
		else if (format[j] == '\\' && format[j + 1] == 'n')
			count += _putchar(format[++j]);
		else
			count += _putchar(format[j]);
		j++;
	}
	va_end(args);
	if (!format)
		return (-1);
	return (count);
}
