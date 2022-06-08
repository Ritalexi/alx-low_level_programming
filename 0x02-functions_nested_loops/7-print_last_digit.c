#include "main.h"

/**
 * print_last_digits
 *
 * @c: number t0 be used
 *
 * Return: Always 0
 */
int print_last_digits(int c)
{
int n;

if (c < 0)
	n = -1 * (c % 10);
else
	n = c % 10;

_putchar((n % 10) + '0');
return (n % 10);
}
