#include "lists.h"
/**
 * free_listint2 - free a list of nodes and your head
 * @head: the pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		(*head) = next_node;
	}
}
