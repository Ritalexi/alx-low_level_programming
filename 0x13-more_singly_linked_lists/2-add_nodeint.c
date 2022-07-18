#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head: pointer to a pointer
 * @n: input
 * Return: Always 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (*head);
}
