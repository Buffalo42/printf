#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
/**
 * _printf - Custom printf function.
 *
 * @format: The format string.
 * @...: The variable number of arguments.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list nc;
	int nc_count = 0;
	const char *s;
	int c = 0;
	unsigned int binary_num = 0;
	int num = 0;
	int precision = -1;
	int flags = 0;
	int width = 0;
	int size = 0;

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
					c = va_arg(nc, int);

					putchar(c);
					nc_count++;
					break;
				case 's':
					s = va_arg(nc, const char *);

					if (s == NULL)
						s = "(null)";
					while (*s)
					{
						putchar(*s);
						s++;
						nc_count++;
					}
					break;
				case '%':
					putchar('%');
					nc_count++;
					break;
				case 'b':
					binary_num = va_arg(nc, unsigned int);
					print_bin(binary_num);
					nc_count++;
					break;
				case 'd':
				case 'i':
					num = va_arg(nc, int);
					print_int(num);
					nc_count++;
					break;
				case '.':
					precision = my_precision(format, &nc_count, nc);
					nc_count++;
					break;
				case '-':
				case '+':
				case '0':
				case '#':
				case ' ':
					flags = my_flags(format, &nc_count);
					nc_count++;
					break;
				case '*':
					width = my_width(format, &nc_count, nc);
					nc_count++;
					break;
				case 'l':
				case 'h':
					size = my_size(format, &nc_count);
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
