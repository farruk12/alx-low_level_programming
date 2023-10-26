#include "main.h"
/**
 * print_binary - function to print in binary
 * @n: our parameeter
 * Return: always success
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
