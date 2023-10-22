#include "main.h"

/**
 * print_unint - print unsigned int
 * @num: number to be printed
 * @num_count: parameter
 * Return: 0
 */
int print_unint(unsigned int num, int *num_count)
{
	if (num >= 10)
	{
		print_unint(num / 10, num_count);
	}
	_putchar((num % 10) + '0');
	(*num_count)++;
	return (0);
}
