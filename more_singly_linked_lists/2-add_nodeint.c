#include "lists.h"
/**
 * add_nodeint - add a new node in the beginning of a list
 * @head: the head of the list
 * @n: is the number to put in the struct
 * Return: a pointer to a listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = (*head)
	(*head) = new;
	return (new_node);
}
