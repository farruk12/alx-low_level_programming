#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - main entry
 * @s: input
 * Return: always success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') 
	{
	printf("\n");
	return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
