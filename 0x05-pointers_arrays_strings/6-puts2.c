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
	int i = strlen(str);


	for (c = 0; c < i; c++)
	{
		if (c % 2 == 0 && str[c] != 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
