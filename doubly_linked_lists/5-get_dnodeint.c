#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of a linked list
 * @index: the index of the node
 * @head: points to first node of the list
 * Return: NULL in error, or a addres of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *actual = head;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (actual)
			actual = actual->next;
		else
			return (NULL);
	}
	return (actual);
}
