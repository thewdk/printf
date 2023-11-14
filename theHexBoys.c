#include "main.h"
#include <unistd.h>
#include <math.h>
/**
 * _printHexBase - base function for printing hexadecimal numbers
 * @arg: argument list containing hexadecimal
 * @_case: a  in caps on lower, printing the hex number in caps in lower
 * Return: number of digits printed
 */

int _printHexBase(va_list arg, char case)
{
	unsigned int num = va_arg(arg, unsigned int);
	int nbrChars;

	if (num == 0)
		return (_putchar('0'));
	nbrChars = _printUnsignedIntToHex(num, case);

	return (nbrChars);
}
/**
 * _printHex - prints a hexadecimal in lower case
 * @arg: list that contains hexadecimal to print
 * Return: number of digits printed
 */

int _printHex(va_list arg)
{
	return (_printHexBase(arg, 'a'));
}

/**
 * _printHEX - prints a hexadecimal in upper case
 * @arg: list that contains hexadecimal to print
 * Return: number of digits printed
 */

int _printHEX(va_list arg)
{
	return (_printHexBase(arg, 'A'));
}
