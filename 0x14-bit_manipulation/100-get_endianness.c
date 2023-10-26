#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * @void: returns void pointer
 * Return: always success
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
