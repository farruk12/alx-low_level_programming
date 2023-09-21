#include "main.h"

/**
 * cap_string - uppercase to lowercase
 * @ptr: Char
 * Return: The uppercase version of the input
 */
char *cap_string(char *ptr)
{
	int x = 0;

	while (ptr[x])
	{
		while (!(ptr[x] >= 'a' && ptr[x] <= 'z'))
			x++;
i
		if (ptr[x - 1] == ' '  ||
		    ptr[x - 1] == '\t' ||
		    ptr[x - 1] == '\n' ||
		    ptr[x - 1] == '.' ||
		    ptr[x - 1] == ',' ||
		    ptr[x - 1] == '!' ||
		    ptr[x - 1] == '?' ||
		    ptr[x - 1] == '{' ||
		    ptr[x - 1] == '}' ||
		    ptr[x - 1] == ';' ||
		    ptr[x - 1] == '(' ||
		    ptr[x - 1] == ')' ||
		    ptr[x - 1] == '"' ||
		    x == 0)
			ptr[x] -= 32;

		x++;
	}

	return (ptr);
}
