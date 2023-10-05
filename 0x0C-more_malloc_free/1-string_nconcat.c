#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - entry point
 * @s1: char
 * @s2: char
 * @n: integer
 * Return: always (success);
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	combined = malloc((len1 + n + 1) * sizeof(char));
	if (combined == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		combined[i] = s1[i];
	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
		{
			combined[i + j] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			combined[i + j] = s2[j];
		}
	}
	combined[i + j] = '\0';
	return (combined);
}
