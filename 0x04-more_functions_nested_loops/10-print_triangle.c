#include "main.h"
/**
 * print_triangle - Entry point
 * @size: input
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
			_putchar(35);

		if (i == size)
			continue;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
