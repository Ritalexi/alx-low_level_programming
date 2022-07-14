#include "lists.h"

/**
 * print_list - Entry point
 * @h: struct pointer
 *
 * Return: Always 0
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		if(h->str != NULL)
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (count);
}
