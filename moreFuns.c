#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _printUnsignedToBinary - prints an integer.
 * @arg: argument
 * Return: 0
 */
int _printUnsignedToBinary(va_list arg)
{

unsigned int num = va_arg(arg, unsigned int);
unsigned int printed;

_printBinary(num, &printed);
_printBinary(num, &printed);

return (printed);
}


/**
 * _printOct - prints number in octal base.
 * @arg: list containing octal number to be printed
 * Return: number of octals printed
 */

int _printOct(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int copy;
	char *octa;
	int i, j, charWritten = 0;

	if (num == 0)
		return (_putchar('0'));
	for (copy = num; copy != 0; j++)
	{
		copy = copy / 8;
	}
	octa = malloc(j);
	if (!octa)
		return (-1);

	for (i = j - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}

	for (i = 0; i < j && octa[i] == '0'; i++)
		;
	for (; i < j; i++)
	{
		_putchar(octa[i]);
		charWritten++;
	}
	free(octa);
	return (charWritten);
}

/**
 * _printUnsignedIntToHex - prints unsigned int to hexadecimal.
 * @num: number to print
 * @case: letter `a` on the case to print it (upper or lower)
 * Return: number or char printed
 */
int _printUnsignedIntToHex(unsigned int num, char case)
{
	unsigned int num2;
	int i, j, remainder, nbrChars = 0;
	char *nhex;

	for (num2 = num; num2 != 0; nbrChars++, num2 /= 16)
	;

	nhex = malloc(nbrChars);
	for (i = 0; num != 0; i++)
	{
		remainder = num % 16;
		if (remainder < 10)
			nhex[i] = remainder + '0';
		else
			nhex[i] = remainder - 10 + _case;
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(nhex[j]);
	free(nhex);
	return (nbrChars);
}

