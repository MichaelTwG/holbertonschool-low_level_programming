#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint list
 * @head: the header of dlistint_t
 * @n: value of the new node
 * Return: the addres of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	*head = new;
	if (new->next != NULL)
	{
		aux = new;
		new = new->next;
		new->prev = aux;
	}
	return (aux);
}
