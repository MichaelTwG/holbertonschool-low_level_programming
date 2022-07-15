#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at the given position
 * @head: the head of list
 * @index: is the position to insert the node
 * @n: is the value of the parameter n of the new node
 * Return: a pointer to the node added or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *actual, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (!(head) || !(new))
		return (NULL);

	actual = (*head);
	new->n = n;
	new->next = NULL;

	if (index == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}

	for (i = 0; actual && i <= index; i++)
	{
		if (i == (index - 1))
		{
			new->next = actual->next;
			actual->next = new;
			return (new);
		}
		else
			actual = actual->next;
	}
	return (NULL);
}
