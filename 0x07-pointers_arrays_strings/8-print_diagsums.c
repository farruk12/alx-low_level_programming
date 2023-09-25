#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int num;
	int sum;
	int i;

	num = 0;
	sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		num += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum, num);
}
