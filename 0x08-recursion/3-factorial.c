#include "main.h"

/**
 * factorial - Entry point
 * @n: input
 * Return: always 0 succcess
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
