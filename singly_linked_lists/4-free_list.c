#include "lists.h"
/**
 * free_list - free a list of nodes
 * @head: the pointer to the head
 */
void free_list(list_t *head)
{
	list_t *next_node = NULL;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
