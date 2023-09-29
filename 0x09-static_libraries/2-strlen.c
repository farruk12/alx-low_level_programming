#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: always success
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; n++)
		s++;

	return (n);
}
