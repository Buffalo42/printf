#include "main.h"

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
	int num_count = 0;

	if (format == NULL)
		return (1);

	va_start(nc, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			num_count++;
		}
		else
		{
			format++;

			switch (*format)
			{
				case 'c':
					_putchar((unsigned char)va_arg(nc, int));
					num_count++;
					break;

				case 's':
					num_count += print_str(va_arg(nc, char *));
					break;

				case 'r':
					num_count += print_rev(va_arg(nc, char *));
					break;

				case 'd':
				case 'i':
					num_count += print_num(va_arg(nc, long int));
					break;

				case 'b':
					num_count += print_bi(va_arg(nc, unsigned int), &num_count);
					break;

				case 'u':
					num_count += print_unint(va_arg(nc, unsigned int), &num_count);
					break;

				case 'o':
					num_count += print_oct(va_arg(nc, unsigned int), &num_count);
					break;

				case 'x':
					num_count += print_hex(va_arg(nc, unsigned int), &num_count);
					num_count--;
					break;

				case 'X':
					num_count += print_heX(va_arg(nc, unsigned int), &num_count);
					num_count--;
					break;

				case '%':
					_putchar('%');
					num_count++;
					break;

				default:
					_putchar('%');
					_putchar(*format);
					num_count += 2;
					break;
			}
		}
		format++;
	}
	va_end(nc);
	return (num_count);
}

