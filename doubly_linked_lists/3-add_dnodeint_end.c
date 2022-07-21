#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: is the head of the list
 * @n: the vlaue of the nuew node
 * Return: a posinter to the new node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *actual;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	actual = (*head);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	for (; actual->next != NULL; actual = actual->next)
		;
	actual->next = new;
	new->prev = actual;
	return (new);
}
