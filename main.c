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

	len = _printf("%o", 192);
	printf("%d\n", len);
	len = printf("%x", 192);
	printf("%d\n", len);
	len = _printf("%o", 0);
	printf("%d\n", len);

	return (0);
}
