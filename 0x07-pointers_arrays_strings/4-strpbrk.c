#include "main.h"

/**
 * _strpbrk - Entry point
 *
 *
 * @s: string
 * @accept: string
 * Return: always (success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; i++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}

