#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
/**
 * print_char - Print a character.
 *
 * @nc: A va_list containing the character to be printed.
 * @nc_count: A pointer to the character count.
 *
 * Return: the number of charachters printed.
 */

int print_char(va_list nc, int *nc_count)
{
	int c = va_arg(nc, int);

	(*nc_count)++;
	putchar(c);
	return (*nc_count);
}

/**
 * print_string - Print a string.
 *
 * @nc: A va_list containing the string to be printed.
 * @nc_count: A pointer to the character count.
 *
 * Return: void
 */

int print_string(va_list nc, int *nc_count)
{
	const char *s = va_arg(nc, const char *);

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		putchar(*s);
		(*nc_count)++;
		s++;
	}
	return (*nc_count);
}

/**
 * print_percent - Print a percent symbol.
 *
 * @nc_count: A pointer to the character count.
 *
 * Return: void
 */
int print_percent(int *nc_count)
{
	putchar('%');
	(*nc_count)++;
	return (*nc_count);
}

/**
 * print_unknown - Print an unknown format specifier.
 *
 * @nc_count: A pointer to the character count.
 * @format: The format specifier to be printed.
 *
 * Return: void
 */
int print_unknown(int *nc_count, const char *format)
{
	putchar('%');
	(*nc_count)++;
	putchar(*format);
	(*nc_count)++;
	return (*nc_count);
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
					nc_count += print_char(nc, &nc_count);
					break;
				case 's':
					nc_count += print_string(nc, &nc_count);
					break;
				case '%':
					nc_count += print_percent(&nc_count);
					break;
				case 'd':
				case 'i':
					nc_count += print_int(nc, &nc_count);
					break;
				case 'b':
					nc_count += print_bin(nc, &nc_count);
					break;
				default:
					nc_count += print_unknown(&nc_count, format);
					break;
			}
		}
		format++;
	}

	va_end(nc);
	return (nc_count);
}
