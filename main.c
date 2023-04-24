#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%d\n", 1234);
	printf("%d\n", 1234);
	_printf("%i\n", 5678);
	printf("%i\n", 5678);
	_printf("%i\n", -12345);
        printf("%i\n", -12345);
	_printf("%i\n", 9-6);
        printf("%i\n", 9-6);
	_printf("%i\n", 0);
        printf("%i\n", 0);
	_printf("%i\n", 'a');
        printf("%i\n", 'a');
	_printf("%i\n", 8.523);

	return (0);
}
