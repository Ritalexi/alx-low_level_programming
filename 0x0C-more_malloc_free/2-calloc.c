#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Entry point
 * @nmemb: input
 * @size: input
 * Return: stuffs
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *s;
	char *sforzeroing;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	sforzeroing = 0;
	for (i = 0; i < size * nmemb; i++)
	{
		sforzeroing[i] = '\0';
	}
	return (s);
}
