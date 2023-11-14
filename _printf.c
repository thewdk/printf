#include <stddef.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * printIds - prints special characters
 * @after: character after the %
 * @arg: argument for the indentifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int printIds(char after, va_list arg)
{
	int funsIndex;
	idStruct funs[] = {
		{"c", _printChar},
		{"s", _printStr},
		{"d", _printInt},
		{"i", _printInt},
		{"u", _printUnsigned},
		{"b", _printUnsignedToBinary},
		{"o", _printOct},
		{"x", _printHex},
		{"X", _printHEX},
		{"S", _printSTR},
		{NULL, NULL}
	};

	for (funsIndex = 0; funs[funsIndex].indentifier != NULL; funsIndex++)
	{
		if (funs[funsIndex].indentifier[0] == after)
			return (funs[funsIndex].printer(arg));
	}
	return (0);
}
/**
 * _printf - Print out the contents
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete identifier error
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int identifierPrinted = 0, charWritten = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charWritten++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charWritten++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		identifierPrinted = printIds(format[i + 1], arg);
		if (identifierPrinted == -1 || identifierPrinted != 0)
			i++;
		if (identifierPrinted > 0)
			charWritten += identifierPrinted;

		if (identifierPrinted == 0)
		{
			_putchar('%');
			charWritten++;
		}
	}
	va_end(arg);
	return (charWritten);
}
