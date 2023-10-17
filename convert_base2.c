#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * to_binary - converts from decimal to binary
 *
 * @nc_num: argument to be converted
 * Return: a binary representation of nc_num
 */

void to_binary(unsigned int nc_num)
{
	if (nc_num > 1)
		to_binary(nc_num / 2);
	putchar('0' + (nc_num % 2));
}

/**
 * print_bin - Print binary representation.
 *
 * @nc: va_list with unsigned int.
 *
 * Return: void
 */
void print_bin(va_list nc)
{
	unsigned int nc_num = va_arg(nc, unsigned int);

	to_binary(nc_num);
}
