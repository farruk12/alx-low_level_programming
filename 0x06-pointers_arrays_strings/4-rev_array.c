#include "main.h"

/**
 * reverse_array - function that reverses the content of an 
 * @a: strings
 * @n: strings
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;


	for (i = 0; i < n / 2; i++ )
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}



