#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two number
 * @a: first number
 * @b: second number
 * Return: diffrence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - subtract two number
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - subtract two number
 * @a: first number
 * @b: second number
 * Return: result of divsion  a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - subtract two number
 * @a: first number
 * @b: second number
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
