#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str - starting with the first character, followed by a new line.
*/
void puts2(char *str)
{
	int n = 0;
	int i = 0;
	char *m = str;
	int s;

	while(*m != '\0')
	{
		m++;
		n++;
	}
	i = n - 1;
	for (s = 0; s <= i; s++)
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	}

	_putchar('\n');
}
