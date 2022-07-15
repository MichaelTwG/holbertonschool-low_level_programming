#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int value;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	(*head) = (*head)->next;
	return (value);
}
