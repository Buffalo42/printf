#include "main.h"

/**
 * my_precision - Calculates precision for printing
 *
 * @format: Formatted string to print arguments
 * @m: Arguments to be printed
 * @lists: list of arguments
 *
 * Return: Precision
 */

int my_precision(const char *format, int *m, va_list list)
{
	int sip_m = *m + 1;
	int precision = -1;

	if (format[sip_m] != '.')
		return (precision);

	precision = 0;

	for (sip_m += 1; format[sip_m] != '\0'; sip_m++)
	{
		if (is_digit(format[sip_m]))
		{
			precision *= 10;
			precision += format[sip_m] - '0';
		}
		else if (format[sip_m] == '*')
		{
			sip_m++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*m = sip_m - 1;

	return (precision);
}
