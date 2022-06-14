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

	j = *a;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			continue;
		printf("%s[%d], ", j, i);
	}
	printf("\n");
}
