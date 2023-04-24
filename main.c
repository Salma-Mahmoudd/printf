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
	_printf("%i\n", 1024);
	printf("%i\n", 1024);

	_printf("%i\n", -1024);
	printf("%i\n", -1024);

	_printf("%i\n", 0);
	printf("%i\n", 0);

	_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MAX);

	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);

	/*_printf("%d\n", INT_MAX + 1024);
	printf("%d\n", INT_MAX + 1024);*/

	_printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("There is %d bytes in %d KB\n", 1024, 1);

	_printf("%i\n", -1);
	printf("%i\n", -1);
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
