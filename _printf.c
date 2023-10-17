#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
/**
 * print_char - Print a character.
 *
 * @nc: A va_list containing the character to be printed.
 *
 * Return: the number of charachters printed.
 */

void print_char(va_list nc)
{
	int c = va_arg(nc, int);

	putchar(c);
}

/**
 * print_string - Print a string.
 *
 * @nc: A va_list containing the string to be printed.
 *
 * Return: void
 */

void print_string(va_list nc)
{
	const char *s = va_arg(nc, const char *);

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		putchar(*s);
		s++;
	}
}


/**
 * _printf - Custom printf function that produces output according to a format.
 *
 * @format: The format string.
 * @...: The variable number of arguments corresponding to format specifiers.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list nc;
	int nc_count = 0;

	va_start(nc, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			nc_count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			switch (*format)
			{
				case 'c':
					print_char(nc);
					nc_count++;
					break;
				case 's':
					print_string(nc);
					nc_count++;
					break;
				case '%':
					putchar('%');
					nc_count++;
					break;
				case 'd':
				case 'i':
					print_int(nc);
					nc_count++;
					break;
				case 'b':
					print_bin(nc);
					nc_count++;
					break;
				default:
					putchar('%');
					nc_count++;
					putchar(*format);
					nc_count++;
					break;
			}
		}
		format++;
	}

	va_end(nc);
	return (nc_count);
}
