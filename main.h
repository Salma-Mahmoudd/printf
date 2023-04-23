#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int type_char(va_list args);
int type_string(va_list args);
int _putchar(char c);
int _escape(char c);


/**
 * struct format - A new struct type.
 * @type: representing a data type.
 * @fn: function pointer.
 */
typedef struct format
{
	char *typ;
	int (*fn)(va_list args);

} type;
#endif
