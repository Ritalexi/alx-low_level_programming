#include "main.h"
/**
 * print_triangle - Entry point
 * @size: input
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, n = size - 1;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j < n)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(35);
			}
		}
		n--;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
