#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first int
 * @b: second int
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	/* todo: handle division by 0 */
	return (a / b);
}

/**
 * op_mod - division of two integers
 * @a: first int
 * @b: second int
 * Return: % of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
