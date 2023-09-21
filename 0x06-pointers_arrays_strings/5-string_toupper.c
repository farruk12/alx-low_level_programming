#include "main.h"

/**
 * string_toupper  - strings
 * @ptr:  strings
 * Return: always 0
 */
char *string_toupper(char *ptr)
{
	int i;

	i = 0;

	while (ptr[i] !=  '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
		i++;
	}
	return (ptr);
}
