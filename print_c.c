#include "main.h"

/**
 * print_c - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int _print_c(va_list val)
{
	char a;

	a = va_arg(val, int);
	_putchar(a);
	return (1);
}
