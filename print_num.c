#include "main.h"

int print_num(long int num);

/**
 * print_num - print all digit of numbers
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_num(long int num)
{
	long int rev = 0, digit, num_count = 0;

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		num_count += 2;
	}

	if (num == INT_MAX)
	{
		_putchar('2');
		num = 147483647;
		num_count += 1;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		num_count += 1;
	}

	if (num == 0)
	{
		_putchar('0');
		num_count += 1;
		return (num_count);
	}
	while (num > 0)
	{
		int digit = num % 10;

		rev = rev * 10 + digit;
		num /= 10;
		num_count += 1;
	}
	while (rev > 0)
	{
		digit = rev % 10;
		_putchar(digit + '0');
		rev /= 10;
	}

	return (num_count);
}
