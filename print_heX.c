#include "main.h"

/**
 * print_heX - converts integer to hexadecimal (uppercase)
 * @num: number to be converted
 * @num_count: parameter
 * Return: number of characters printed
 */
int print_heX(unsigned int num, int *num_count)
{
	int rem;
	int count_X = 0;

	if (num >= 16)
	{
		print_heX(num / 16, num_count);
	}
	rem = num % 16;
	if (rem < 10)
	{
		_putchar(rem + '0');
		count_X++;
	}
	else
	{
		_putchar('A' + rem - 10);
		count_X++;
	}
	*num_count += count_X;
	return (count_X);
}
