#include "lists.h"
/**
 * free_listint2 - free a list of nodes and your head
 * @head: the pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node = NULL;
	listint_t *head2 = *head;

	while (head2)
	{
		next_node = head2->next;
		free(head2);
		head2 = next_node;
	}
	head = NULL;
}
