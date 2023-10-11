#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Entry point
 * @a: integer
 * @b: integer
 * Return: always (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point
 * @a: integer
 * @b: integer
 * Return: always (success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry point
 * @a: integer
 * @b: integer
 * Return: always (success)
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - entry point
 * @a: integer
 * @b: integer
 * Return: always success
 */
int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = a / b;
	return (result);
}

/**
 * op_mod - entry point
 * @a: integer
 * @b: integer
 * Return: always (success)
 */
int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = a % 10;
	return (result);
}
