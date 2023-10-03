#include <stdlib.h>
#include "main.h"

/**
 * create_array - entry point
 * @size: integer
 * @c: character
 * Return: always (success)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char*)malloc(size);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
