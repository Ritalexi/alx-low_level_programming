#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: input
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
}
