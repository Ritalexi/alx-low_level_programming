#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Entry point
 * @size: input
 * @c: input
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (p == NULL)
		{
			return (NULL);
		}
		p[i] = c;
	}
	return (p);
}
