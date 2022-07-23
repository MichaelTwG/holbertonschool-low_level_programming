#include "lists.h"
/**
 * insert_dnodeint_at_index - isert a node in the given idex
 * @h: the head of the linked list
 * @idx: the index
 * @n: value of the new node
 * Return: a pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *actual = *h, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!(*h))
	{
		(*h) = new;
		return (new);
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return(new);
	}

	for (i = 0; actual->next && (i + 1) != idx; i++)
		actual = actual->next;

	if (!actual->next && (idx > i + 1))
		return (0);

	if (!actual->next)
	{
		add_dnodeint_end(h, n);
		return (new);
	}

	new->next = actual->next;
	new->prev = actual->next->prev;
	actual->next->prev = new;
	actual->next = new;
	return (new);

}
