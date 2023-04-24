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

	len = _printf("%b", 192);
	printf("%d\n", len);
	len = _printf("%b", 0);
	printf("%d\n", len);
	len = _printf("%b", 4294967295);
	printf("%d\n", len);
	len = _printf("%b", 10000);
	printf("%d\n", len);
	len = _printf("%b", 88);
	printf("%d\n", len);

	return (0);
}
