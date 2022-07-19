#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: pointer to a pointer
 * Return: Always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *curr;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

		temp = *head;

		num = temp->n;

		curr = temp->next;

		free (temp);

		*head = curr;

		return (num);
}
