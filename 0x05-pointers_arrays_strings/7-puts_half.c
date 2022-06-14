#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Entry point
 * @str: pointer
 */

void puts_half(char *str)
{
	int c, n;
	int i = strlen(str);
	char l;

	if (i % 2 == 0)
	{
		for (c = i / 2; c < i; c++)
		{
			if (str[c] != 0)
			{
				l = str[c];
				_putchar(l);
			}
		}
		_putchar('\n');
	}

	else
	{
		n = (i - 1) / 2;

		for (c = n - 1; c < i; c++)
		{
			if (str[c] != 0)
			{
				l = str[c];
				_putchar(l);
			}
		}
		_putchar('\n');
	}
}
