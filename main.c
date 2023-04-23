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
	_printf("%%%c\n", 'H');
	printf("%%%c\n", 'H');
	_printf("\\%c\n", 'H');
	printf("\\%c\n", 'H');
	_printf("%c\n", 'H');
	printf("%c\n", 'H');
	_printf("%c%s%c\n", 'H', "isalma", '!');
	printf("%c%s%c\n", 'H', "isalma", '!');
	_printf("%c%%\n", 'H');
	printf("%c%%\n", 'H');
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	return (0);
}
