#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/*
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int _print_pointer(va_list val);
int _print_unsigned(va_list args);
int _print_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int _print_HEX_extra(unsigned int num);
int _print_exc_string(va_list val);
int _print_HEX(va_list val);
int _print_hex(va_list val);
int _print_oct(va_list val);
int _print_bin(va_list val);
int _print_revs(va_list args);
int _print_rot13(va_list args);
int _print_i(va_list args);
int _print_d(va_list args);
int _strlen(char *s);
int _rev_string(char *s);
int _print_37(void);
int _print_c(va_list val);
int _print_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
