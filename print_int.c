#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - Print an integer.
 *
 * @nc: A va_list containing the integer to be printed.
 * Return: void
 */

void print_int(va_list nc)
{
	int num_nc = va_arg(nc, int);
	char result = 0;

	if (num_nc >= 0)
	{
		putchar(' ');
	}

	result = '0' + (num_nc % 10);
	putchar(result);
}
