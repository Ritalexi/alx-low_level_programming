#include "main.h"

int _sqrt(int p, int r);
/**
 * _sqrt_recursion -Entry point
 * @n: parameter
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - Entry point
 * @p: previou value
 * @r: root value
 * Return: Always 0
 */

int _sqrt(int p, int r)
{
	if (p > r)
		return (-1);

	else if (p * p == r)
	{
		return (p);
	}

	return (_sqrt(p + 1, r));
}
