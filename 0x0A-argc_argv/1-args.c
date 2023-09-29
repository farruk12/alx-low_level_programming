#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: integer
 * @argv: string
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);
	for (i = 1; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}

