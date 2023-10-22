#include "main.h"

/**
 * print_str - print a string
 *
 * @str: String to print
 *
 * Return: Number of characters printed
 */

int print_str(char *str)
{
	int num_count = 0;

	if (str == NULL)
	{
		char *null = "(null)";

		while (*null)
		{
			_putchar(*null);
			null++;
			num_count++;
		}
	}
	else
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			num_count++;
		}
	}

	return (num_count);
}

