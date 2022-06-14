#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @str: pointer
 */

void puts2(char *str)
{
	int c;


	for (c = 0; c > c + 1; c++)
	{
		if (c % 2 == 0 && str[c] != 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
