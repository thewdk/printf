#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _printBinary - function that prints the binary representation of a number
 * @num: number to be printed in binary
 * @printed: hold the number of characters printed
 */

void _printBinary(unsigned int num, unsigned int *printed)
{
	if  (num > 0)
	{
		*printed += 1;
		_printBinary(num >> 1, printed);
	}
	_putchar((num & 1) + '0');
}
