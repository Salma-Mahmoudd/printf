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
	int len;

	len = _printf("%u", 192);
	printf("%d\n", len);
	len = printf("%u", 192);
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
	return (0);
}
