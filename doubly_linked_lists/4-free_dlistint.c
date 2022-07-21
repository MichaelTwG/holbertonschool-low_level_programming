#include "lists.h"
/**
 * free_dlistint - free all the nodes in a list
 * @head: point to the first node in a list
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
