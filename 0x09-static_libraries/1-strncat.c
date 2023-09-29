#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: strings
 * @src: strings
 * @n: integer
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
