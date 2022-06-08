#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @n: number to be used
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
	else if (n == 98)
	{
		_putchar(n);
		_putchar('\n');
	}
	else 
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
