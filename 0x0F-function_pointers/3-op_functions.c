#include "3-calc.h"

/**
 * op_add - sum of a and b
 * @a: input
 * @b: input
 * Return: Always 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: int 1
 * @b: int 2
 * Return: Always 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: input
 * @b: input
 * Return: Always 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 * @a: input
 * @b: input
 * Return: Always 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Entry point
 * @a: input
 * @b: input
 * Return: Always 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		 printf("Error\n");
		 exit(100);
	}

	return (a % b);
}
