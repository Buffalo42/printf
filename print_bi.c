#include "main.h"

/**
 * print_bi - converts integer to binary
 * @num: number to be converted
 * @num_count: parameter
 * Return: number of characters printed
 */
int print_bi(unsigned int num, int *num_count)
{
	if (num > 0)
	{
		print_bi(num / 2, num_count);
		_putchar((num % 2) + '0');
		(*num_count)++;
	}
	return (0);
}
