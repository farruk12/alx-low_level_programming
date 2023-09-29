#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i;

	while (*s)
	{
		for (i  = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i  + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (0);
}
