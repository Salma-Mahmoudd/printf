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
	unsigned int len;
	long int x;

	x = INT_MAX;

	len = _printf("%X", -1024);
	printf("%u\n", len);
	len = printf("%X", -1024);
	printf("%u\n", len);

	len = _printf("%X", x * 2);
	printf("%u\n", len);
	len = printf("%X", x * 2);
	printf("%u\n", len);
/*
	len = _printf("%x", 'a');
	printf("%d\n", len);
	len = printf("%x", 'a');
	printf("%d\n", len);

	len = _printf("%X", 'a');
	printf("%d\n", len);
	len = printf("%X", 'a');
	printf("%d\n", len);

	len = _printf("%u", 4294967295);
	printf("%d\n", len);
	len = printf("%u", 4294967295);
	printf("%d\n", len);

	len = _printf("%u", 0);
	printf("%d\n", len);
	len = printf("%u", 0);
	printf("%d\n", len);

	len = printf("%u", -5);
	printf("%d\n", len);
	len = _printf("%u", -5);
	printf("%d\n", len);
*/
	return (0);
}
