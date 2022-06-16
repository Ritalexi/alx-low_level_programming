#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 * @a: pointer
 * @n: input
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (i >= 0)
	{
		if (i == 0)
			continue;
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
		i--;
	}
}
