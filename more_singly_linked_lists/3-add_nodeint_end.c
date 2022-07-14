#include "lists.h"
/**
 * add_nodeint_end - add a new node in the end of a list
 * @head: the head of the list
 * @n: is the number to put in the struct
 * Return: a pointer to a listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *actual = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	for (; actual->next != NULL; actual = actual->next)
		;
	actual->next = new_node;
	return (new_node);
}
