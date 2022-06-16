#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 * @a: pointer
 * @n: input
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
	for (j = i + 1; j > 0; j--)
	{
		k = a[j];
		a[j] = a[j--];
		a[j--] = k;
	}
	}
}
