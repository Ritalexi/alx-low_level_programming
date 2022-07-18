#include "lists.h"

/**
 * print_listint - Entry point
 * @h: pointer
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
