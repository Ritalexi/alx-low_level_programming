#include "main.h"

/**
 * swap_int - Entry point
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
