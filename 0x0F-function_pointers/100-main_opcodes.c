#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		return (2);
	}

	p = (char *)main;
	for (i = 0; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%02hhx\n", p[i]);
		}
		else
		{
			printf("%02hhx ", p[i]);
		}
	}

	return (0);
}
