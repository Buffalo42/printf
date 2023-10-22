#include "main.h"

/**
 * print_hex - converts integer to hexadecimal (lowercase)
 * @num: number to be converted
 * @num_count: parameter
 * Return: number of characters printed
 */
int print_hex(unsigned int num, int *num_count)
{
	int rem;
	int count_x = 0;

	if (num >= 16)
	{
		print_hex(num / 16, num_count);
	}
	rem = num % 16;
	if (rem < 10)
	{
		_putchar(rem + '0');
		count_x++;
	}
	else
	{
		_putchar('a' + rem - 10);
		count_x++;
	}
	*num_count += count_x;
	return (count_x);
}
