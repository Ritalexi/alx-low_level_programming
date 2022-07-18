#include "lists.h"

/**
 * free_listint - Entry point
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *phree;

	while (head)
	{
		phree = head;
		head = head->next;
		free(phree);
	}
}
