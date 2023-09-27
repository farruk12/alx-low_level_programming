#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n: input
 * Return: always success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (Myfunction(n, 1));
}

/**
 * Myfunction - Entry point
 * @n: input
 * @guess: input
 * Return: x + 1
 */

int Myfunction(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (Myfunction(n, guess + 1));
}
