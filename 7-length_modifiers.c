#include "main.h"
/**
 * _long - take long numbers
 * @args: arg point to the string to be printed.
 * @next: nesxt char of format.
 * Return: length of what will be printed
 */
int _long(va_list args, char next)
{
	long int count = 0;

	if (next == 'd' || next == 'i')
		count += type_lint(args);
	else if (next == 'u')
		count += type_luint(args);
	else if (next == 'o')
		count += type_loct(args);
	else if (next == 'x')
		count += type_lhex(args);
	else if (next == 'X')
		count += type_lHEX(args);
	else
		return (0);
	return (count);
}
/**
 * _short - take long numbers
 * @args: arg point to the string to be printed.
 * @next: nesxt char of format.
 * Return: length of what will be printed
 */
int _short(va_list args, char next)
{
	short int count = 0;

	if (next == 'd' || next == 'i')
		count += type_hint(args);
	else if (next == 'u')
		count += type_huint(args);
	else if (next == 'o')
		count += type_hoct(args);
	else if (next == 'x')
		count += type_hhex(args);
	else if (next == 'X')
		count += type_hHEX(args);
	else
		return (0);
	return (count);
}
