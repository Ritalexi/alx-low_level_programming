#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @k: number to be used
 *
 * Return: Always 0
 */
void print_to_98(int k)
{
	int n;

	if (k < 98)
	{
		for (n = k; n <= 98; n++)
		{
			_putchar(n);
			if (n == k)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (k == 98)
	{
		_putchar(n);
		_putchar('\n');
	}
	else
	{
		for (n = k; n >= 98; n--)
		{
			_putchar(n);
			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
