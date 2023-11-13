#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    if (format == NULL)
        return -1;

    int count = 0;
    va_list args;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && *(format + 1) != '\0')
        {
            format++; /* Move to the character after '%' */

            switch (*format)
            {
            case 'c':
                count += write(1, &va_arg(args, int), 1);
                break;
            case 's':
                count += write(1, va_arg(args, char *), 1);
                break;
            case '%':
                count += write(1, "%", 1);
                break;
            case 'd':
            case 'i':
                count += write_integer(va_arg(args, int));
                break;
            default:
                count += write(1, "%", 1);
                count += write(1, format, 1);
            }
        }
        else
        {
            count += write(1, format, 1);
        }

        format++;
    }

    va_end(args);

    return count;
}

/**
 * write_integer - Write an integer to standard output
 * @n: Integer to be printed
 *
 * Return: Number of characters printed
 */
int write_integer(int n)
{
    char buffer[20]; /* Assuming a 32-bit integer */
    int count;

    count = sprintf(buffer, "%d", n);
    write(1, buffer, count);

    return count;
}
