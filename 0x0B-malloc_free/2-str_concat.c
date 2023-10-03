#include <stdlib.h>
#include "main.h"

/**
 * str_concat - entry point
 * @s1: string
 * @s2: string
 * Return: always (success)
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i;
	int len_s1 = 0;
	int len_s2 = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[len_s1] == ' ')
		len_s1++;
	while (s2[len_s2] == ' ')
		len_s2++;
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i < len_s2; i++)
	{
		result[len_s1 + i] = s2[i];
	}
	result[len_s1 + len_s2] = '\0';

	return (result);
}
