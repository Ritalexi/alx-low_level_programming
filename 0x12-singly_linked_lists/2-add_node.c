#include "lists.h"
#include <string.h>

/**
 * add_node - Entry point
 * @head: pointer to a pointer
 * @str: pointer
 * Return: Always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);


	ptr->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	ptr->len = i;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
