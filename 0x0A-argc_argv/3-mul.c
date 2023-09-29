#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc:  integer
 * @argv:  string
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
