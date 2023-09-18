#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse
 * @s: reverse order
 */
void print_rev(char *s)
{
	int n = 0;
	int k;

	while (*s != '\0')
	{
		n++;
		s++;
	}


	for (k = n; k >= 0; k--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
