#include "main.h"

/**
 * 1-swap.c - function that swaps the values of two integers.
 * @a , b:  integers
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
