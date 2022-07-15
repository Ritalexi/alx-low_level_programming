#include "lists.h"
#include <string.h>

/**
 * add_node_end - Entry point
 * @head: pointer to pointer
 * @str: pointer
 * Return: Always 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *end;
	size_t i;

	if (!(head && str))
		return (NULL);

	end = malloc(sizeof(list_t));

	if (!end)
		return (NULL);

	end->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	end->len = i;

	if (!*head)
	{
		ptr = *head;
		return (ptr);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = end;

	return (end);
}
