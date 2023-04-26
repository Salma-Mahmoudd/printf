#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%lx\n", 1024);
	printf("%lx\n", 1024);

	_printf("%lx\n", -1024);
	printf("%lx\n", -1024);

	_printf("%lx\n", USHRT_MAX);
	printf("%lx\n", USHRT_MAX);

	_printf("%lX\n", USHRT_MAX);
	printf("%lX\n", USHRT_MAX);

	_printf("%lX\n", 0);
	printf("%lX\n", 0);

	_printf("%lu\n", LONG_MIN);
	printf("%lu\n", LONG_MIN);

	_printf("%lo\n", ULONG_MAX);
	printf("%lo\n", ULONG_MAX);

	_printf("%lu\n", ULONG_MAX);
	printf("%lu\n", ULONG_MAX);

	_printf("%lo\n", 1024UL);
	printf("%lo\n", 1024UL);


	return (0);
}
