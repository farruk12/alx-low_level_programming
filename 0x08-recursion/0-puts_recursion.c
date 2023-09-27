#include "main.h"

/**
 * _puts_recursion - main entry
 * @s: input
 * Return: always success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
