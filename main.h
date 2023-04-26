#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int type_char(va_list args);
int type_string(va_list args);
int type_int(va_list args);
int type_bin(va_list args);
int type_uint(va_list args);
int type_oct(va_list args);
int type_hex(va_list args);
int type_HEX(va_list args);
int type_lint(va_list args);
int type_luint(va_list args);
int type_loct(va_list args);
int type_lhex(va_list args);
int type_lHEX(va_list args);
int type_hint(va_list args);
int type_huint(va_list args);
int type_hoct(va_list args);
int type_hhex(va_list args);
int type_hHEX(va_list args);
int type_string_cap(va_list args);
void HEX_char(char str);
int type_pointer(va_list args);
void HEX_char_p(unsigned long int str);
int reversed_string(va_list args);
int rot13(va_list args);
int _percent(char k_1, char k, char k_2, va_list args);
int _escape(char c);
int _long(va_list args, char k_2);
int _short(va_list args, char k_2);


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
