#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - entry point
 * @array: arrays
 * @size: positive integers
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

