#include "main.h"
#include <stdlib.h>

/**
 * *array_range - entry point
 * @min: integer
 * @max: integer
 * Return: always (succes)
 */
int *array_range(int min, int max)
{	
	int *ptr;
	int size = max - min + 1;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
