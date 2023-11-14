#include "main.h"

/**
 * _strlen - finds the length of string.
 * @s: string
 * Return: int.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - find the length of a string but for constant char.
 * @s: string
 * Return: int
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

