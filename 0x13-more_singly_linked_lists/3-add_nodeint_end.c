#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * @head: pointer to a pointer
 * @n: input
 * Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nhead, *ptr;

	(void)temp;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if(!*head)
	{
		*head = ptr;
		return (ptr);
	}

	nhead = *head;

	while (nhead->next != NULL)
	{
		nhead = nhead->next;
	}

	nhead->next = ptr;

	return (ptr);
}
