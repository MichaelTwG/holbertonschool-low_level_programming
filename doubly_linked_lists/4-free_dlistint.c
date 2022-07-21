#include "lists.h"
/**
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node = NULL;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
