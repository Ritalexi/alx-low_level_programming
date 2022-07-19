#include "lists.h"

/**
 * sum_listint - Entry point
 * @head: pointer
 * Return: Always 0
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i = i + head->n;

		head = head->next;
	}

	return (i);
}
