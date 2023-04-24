#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int type_char(va_list args);
int type_string(va_list args);
int type_int(va_list args);
int _percent(char k_1, char k, va_list args);
int _escape(char c);


/**
 * struct format - A new struct type.
 * @typ: representing a data type.
 * @fn: function pointer.
 */
typedef struct format
{
	char *typ;
	int (*fn)(va_list args);

} type;
#endif