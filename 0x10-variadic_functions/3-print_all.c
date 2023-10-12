#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - function name
 * @format: constant to char
 */
void print_all(const char * const format, ...)
{
	int i;
	char *separator;
	int flag;
	char *string;
	va_list any_print;

	va_start(any_print, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		flag = 1;
		switch (format[i])
		{
		case 'c':
			printf("%s %c", separator, va_arg(any_print, int));
			break;
		case 'i':
			printf("%s %d", separator, va_arg(any_print, int));
			break;
		case 'f':
			printf("%s %f", separator, va_arg(any_print, double));
		break;
		case 's':
		{
		string = va_arg(any_print, char*);
			if (string == NULL)
				printf("%s(nil)", separator);
			printf("%s %s", separator, string);
			break;
		}
		default:
			flag = 0;
		}
	if (flag)
		separator = ",";
	i++;
	}
	printf("\n");
	va_end(any_print);
}
