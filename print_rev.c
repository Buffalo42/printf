#include "main.h"

/**
 * print_rev - print the reverse string
 *
 * @str: String to print
 *
 * Return: num_count.
 */
int print_rev(char *str)
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
		char *end = str;

		while (*end)
			end++;
		end--;

		while (end >= str)
		{
			_putchar(*end);
			end--;
			num_count++;
		}
	}
	return (num_count);
}

