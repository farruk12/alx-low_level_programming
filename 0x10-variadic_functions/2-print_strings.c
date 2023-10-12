#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Write a function that prints strings
 * @separator: character string
 * @n: positive integer
 * Return: always sucess
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *result;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(args, char*);
		if (result == NULL)
			printf("(nil)");
		else
			printf("%s", result);

		if (separator != NULL && *separator != '\0' && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}


