#include "main.h"

/**
 * my_width - Calculates the printing width
 * @format: Formatted string to print the arguments
 * @k: List of arguments to be printed
 * @lists: list of arguments
 *
 * Return: width
 */

int my_width(const char *format, int *k, va_list list)
{
	int sip_k;
	int width = 0;

	for (sip_k = *k + 1; format[sip_k] != '\0'; sip_k++)
	{
		if (is_digit(format[sip_k]))
		{
			width *= 10;
			width += format[sip_k] - '0';
		}
		else if (format[sip_k] == '*')
		{
			sip_k++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*k = sip_k - 1;

	return (width);
}
