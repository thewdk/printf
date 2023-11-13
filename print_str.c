#include "main.h"

/**
 * _strlen - find the length of a string.
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);

}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);
}
