#include "main.h"

/**
 * is_prime_number - Entry point
 * @n: input
 * Return: always succes
*/

int is_prime_helper(int n, int divisor) 
{
	if (n <= 1) {
	return 0;
	}
	if (divisor == 1) {
	return 1;
	}
	if (n % divisor == 0) {
	return 0;
	}
    
	return is_prime_helper(n, divisor - 1);
}

int is_prime_number(int n) 
{
    if (n <= 1) 
	{
	return 0;
	}

	return is_prime_helper(n, n - 1);
}
