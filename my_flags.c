#include "main.h"

/**
 * my_flags - Calculates any active flags
 * @format: Formatted string to print the arguments
 * @n: parameter
 * Return: Flags
 */

int my_flags(const char *format, int *n)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8 16 */
	int m, sip_n;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (sip_n = *n + 1; format[sip_n] != '\0'; sip_n++)
	{
		for (m = 0; FLAGS_CH[m] != '\0'; m++)
			if (format[sip_n] == FLAGS_CH[m])
			{
				flags = FLAGS_ARR[m];
				break;
			}

		*n = sip_n - 1;

		 return (flags);
	}
