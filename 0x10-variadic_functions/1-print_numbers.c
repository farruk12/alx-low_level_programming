#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 * @separator: character
 * @n: unsigned positive integer
 * Return: always (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	unsigned int result;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(args, unsigned int);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}

	printf("%d", result);
	}

	printf("\n");
	va_end(args);
}


