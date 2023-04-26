#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%hx\n", 1024);
	printf("%hx\n", 1024);

	_printf("%hx\n", -1024);
	printf("%hx\n", -1024);

	_printf("%hx\n", USHRT_MAX);
	printf("%hx\n", USHRT_MAX);

	_printf("%hX\n", USHRT_MAX);
	printf("%hX\n", USHRT_MAX);

	_printf("%hX\n", 0);
	printf("%hX\n", 0);

	_printf("%hu\n", LONG_MIN);
	printf("%hu\n", LONG_MIN);

	_printf("%ho\n", ULONG_MAX);
	printf("%ho\n", ULONG_MAX);

	_printf("%hu\n", ULONG_MAX);
	printf("%hu\n", ULONG_MAX);

	_printf("%ho\n", 1024UL);
	printf("%ho\n", 1024UL);


	return (0);
}
