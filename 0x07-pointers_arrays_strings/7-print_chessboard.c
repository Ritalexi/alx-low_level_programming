#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: pointer
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; a != '\0'; i++)
	{
		_putchar(*(a + i));
		_putchar('\n');
	}
	return (0);
}
