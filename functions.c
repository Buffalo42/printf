#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - Print Formatted output
 * @format: Formatted for given string
 * Return: Int
 */
int _printf(const char *format, ...)
{
        va_list argp;
        int num_count = 0;

        if (format == NULL)
                break;

        va_start(argp, format);

        while (*format != '\0')
        {
                if (*format == '%')
                {
                        format++;
                        switch (*format)
                        {
                                case 'c':
                                        _putchar((unsigned char)va_arg(argp, int));
                                        num_count++;
                                        break;
                                case 's':
                                        num_count += printstring(va_arg(argp, char *));
                                        break;
                                case 'r':
                                        num_count += printreverse(va_arg(argp, char *));
                                        break;
                                case 'd':
                                case 'i':
                                        num_count += print_num(va_arg(argp, long int);
                                        break;
                                case 'b':
                                        num_count += print_bin(va_arg(argp, unsigned int), &num_count);
                                        break;
                                case 'u':
                                        num_count += print_unsigned_int(va_arg(argp, unsigned int), &num_count);
                                        break;
                                case 'o':
                                        num_count += print_octal(va_arg(argp, unsigned int), &num_count);
                                        break;
                                case 'x':
                                        num_count += print_hexa_x(va_arg(argp, unsigned int), &num_count);
                                        num_count--;
                                        break;
                                case 'X':
                                        num_count += print_hexa_X(va_arg(argp, unsigned int), &num_count);             num_count--;
                                        break;
                                case '%':
                                        num_count++;
                                        _putchar('%');
                                        break;
                                default:
                                        num_count++;
                                        _putchar('%');
                                        _putchar(*format);
                        }
                }
                else
                {
                        _putchar(*format);
                        num_count++;
                }
                format++;
        }

        va_end(argp);
        return (num_count);
}
