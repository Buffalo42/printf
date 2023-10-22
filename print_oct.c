#include "main.h"

/**
 * print_oct - converts integer to binary
 * @num: number to be converted
 * @num_count: parameter
 * Return: number of characters printed
 */
int print_oct(unsigned int num, int *num_count)
{
	if (num > 0)
	{
		print_oct(num / 8, num_count);
		_putchar((num % 8) + '0');
		(*num_count)++;
	}
	return (0);
}

