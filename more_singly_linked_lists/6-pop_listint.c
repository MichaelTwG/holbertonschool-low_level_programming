#include "listint.c"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *new_head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	return (value);
}
