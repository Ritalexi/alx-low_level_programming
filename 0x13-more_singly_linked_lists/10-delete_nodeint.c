#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: pointer to pointer
 * @index: input
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 unsigned int k;
	 listint_t *i, *j;

	 i = *head;

	 if (index != 0)
	 {
		 for (k = 0; k < index - 1 && i != NULL; k++)
		 {
			 i = i->next;
		 }
	 }

	 if (i == NULL || (i->next == NULL && index != 0))
	 {
		 return (-1);
	 }

	 j = i->next;

	 if (index != 0)
	 {
		 i->next = j->next;
		 free(j);
	 }
	 else
	 {
		 free(i);
		 *head = j;
	 }

	 return (1);
}
