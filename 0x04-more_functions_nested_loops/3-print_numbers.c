#include "main.h"

/**
 * print_numbers - Entry point
 * Return: 0
 */

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
