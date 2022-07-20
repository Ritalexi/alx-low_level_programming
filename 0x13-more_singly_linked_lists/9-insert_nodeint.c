#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * @head: pointer to pointer
 * @idx: input
 * @n: input
 * Return: Always 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *old;

	old = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && old != NULL; i++)
		{
			old = old->next;
		}
	}

	if (old == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = old->next;
		old->next = new;
	}

	return (new);
}
