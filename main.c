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
	return (0);
}
