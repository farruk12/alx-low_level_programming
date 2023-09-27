#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Entry point
 * @s: input
 * Return: always success
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
