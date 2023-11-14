#ifndef MAIN_H
#define MAIN_H
#include  <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct idStruct
{
char *indentifier;
int (*printer)(va_list);
} idStruct;


int _putchar(char c);
int _printInt(va_list arg);
int _printUnsigned(va_list arg);
int _printf(const char *format, ...);
int _printChar(va_list arg);
int _printStr(va_list arg);
int _printPercent(void);
void _printBinary(unsigned int n, unsigned int *printed);
int _printUnsignedToBinary(va_list arg);
int _printOct(va_list arg);
int _printUnsignedIntToHex(unsigned int num, char _case);
int _printHex_base(va_list arg, char _case);
int _printHex(va_list arg);
int _printHEX(va_list arg);
int _printSTR(va_list arg);


#endif
