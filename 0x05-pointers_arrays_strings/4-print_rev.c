#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Entry point
 * @s: pointer
 */

void print_rev(char *s)
{
	int no = strlen(s);
	int i;

	for (i = 0; i <= no; i++)
	{
		_putchar(s[no - i]);
	}
	_putchar('\n');
}
