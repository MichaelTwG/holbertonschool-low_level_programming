#include "lists.h"
/**
 * pop_listint - delete the head node of a list
 * @head: the head of the list
 * Return: return the value of the deleted head
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *prev_head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	prev_head = (*head);
	(*head) = (*head)->next;
	free(prev_head);
	return (value);
}
