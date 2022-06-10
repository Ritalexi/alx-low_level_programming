#include "main.h"
/**
 * print_triangle - Entry point
 * @size: input
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - j)
			{
				_putchar(' ');
			}
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
