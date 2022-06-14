#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a: pointer
 * @n: input
 */

void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = *(a + i);
		printf("%d", j);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
