#include <stdlib.h>
#include "main.h"

/**
 * _strdup - entry point
 * @str: string
 * Return: always (success)
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int str_len = 0;
	
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	p = malloc((str_len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	p[i] = '\0';

	return (p);
}
