#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 * Return: 1 or 0
 */

void print_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
}
