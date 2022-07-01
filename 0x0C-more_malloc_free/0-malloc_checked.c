#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**malloc_checked - Entry point
 * @b: input
 * Return: the pointer
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
