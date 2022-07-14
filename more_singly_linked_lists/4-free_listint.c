#include "lists.h"
/**
 * free_listint - free a list of nodes
 * @head: the pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *next_node = NULL;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
