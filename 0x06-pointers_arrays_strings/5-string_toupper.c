#include "main.h"

/**
 * string_toupper  - strings
 * @ptr:  strings
 * Return: always 0
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] !=  '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = ptr[i] - 32;
			i++;
		}
	}
}
