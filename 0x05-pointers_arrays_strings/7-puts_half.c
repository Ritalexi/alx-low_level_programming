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

	if (i % 2 == 0)
	{
		for (c = i / 2; c < i; c++)
		{
			if (str[c] != 0)
			{
				_putchar(str[c]);
			}
		}
		_putchar('\n');
	}

	else
	{
		n = (i - 1) / 2;

		for (c = n; c < n; c++)
		{
			if (str[c] != 0)
			{
				_putchar(str[c]);
			}
		}
		_putchar('\n');
	}
}
