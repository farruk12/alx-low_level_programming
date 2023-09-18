#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: Write a function that reverses a string.
 */
void rev_string(char *s)
{
	int n = 0;
	char k = s[0];
	int j;

	while (s[n] != '\0')
	{
		n++;
	}
	for (j = 0; j < n; j++)
	{
		n--;
		k = s[j];
		s[j] = s[n];
		s[n] = k;
	}
}

