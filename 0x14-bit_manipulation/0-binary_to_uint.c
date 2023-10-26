#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointer to our string
 * Return: always success
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i = 0, mark = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		mark = (mark << 1) | (b[i] - '0');
		i++;
	}

	return (mark);
}
