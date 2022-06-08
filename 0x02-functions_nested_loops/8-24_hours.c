#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_puchar(i / 10);
			_putchar(i % 10);
			_putchar(':');
			_putchar(j / 10);
			_putchar(j % 10);
			_putchar('\n');
		}
	}
}
