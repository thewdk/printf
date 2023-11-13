#include "main.h"
/**
 * print_s - print string.
 * @val: argument.
 * Return: the length of the string.
 */

int _print_s(va_list val)
{
	char *s;
	int index, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (index = 0; index < len; index++)
			_putchar(s[index]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (index = 0; index < len; index++)
			_putchar(s[index]);
		return (len);
	}
}
