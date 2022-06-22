#include "main.h"

/**
 * _puts_recursion -Entry point
 * @s: ponter
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; *s; i++)
	{
		if (*(s + i) == '\0')
			break;

		_putchar(*(s + i));
	}
	_putchar('\n');
}
