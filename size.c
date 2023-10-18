#include "main.h"

/**
 * my_size - Calculates size to cast argument
 *
 * @format: Formatted string to print arguments
 * @k: Arguments to be printed
 *
 * Return: Size
 */

int my_size(const char *format, int *k)
{
	int sip_k = *k + 1;
	int size = 0;

	if (format[sip_k] == 'l')
		size = S_LONG;
	else if (format[sip_k] == 'h')
		size = S_SHORT;

	if (size == 0)
		*k = sip_k - 1;
	else
		*k = sip_k;

	return (size);
}
