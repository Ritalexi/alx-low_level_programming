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

	for (i = 0; i >= no + 1; i++)
	{
		if (s[i] == '\0')
			break;
	}
	for (i = no; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
