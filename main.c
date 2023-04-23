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

	len = _printf("%            %    ");
	printf("%d\n",len);
	len = _printf("%                ");
	printf("%d\n",len);
	len = printf("%            %    ");
	printf("%d\n",len);

	_printf("%c mine \n", '\0');
	printf("\n%c yours \n", '\0');


	_printf("hi: you %s nothing. \n", (char *)0);
	printf("hi: you %s nothing. \n", (char *)0);
	_printf("%%");
	printf("%%");
	printf("%%\n");

	len = _printf("complete the sentence: you %s nothing, .\n", (char*)0);
	printf("%d\n",len);
	len = printf("complete the sentence: you %s nothing, .\n", (char*)0);
	printf("%d\n",len);

	len = _printf("%s%c%c%c%s%%%s%c","loading",'.','.','.',"99","please wait",'\n');
	printf("%d\n",len);
	len = printf("%s%c%c%c%s%%%s%c","loading",'.','.','.',"99","please wait",'\n');
	printf("%d\n",len);

	_printf("%k\n");
	printf("%k\n");
	
	_printf("%c mine \n", 48);
	printf("%c yours \n", 48);
	_printf("% mine \n");
	printf("% yours \n");
	_printf("%! mine \n");
	printf("%! yours \n");
	_printf("%c mine ", '\0');
	printf("%c yours ", '\0');
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
