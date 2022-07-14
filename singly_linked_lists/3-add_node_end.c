#include "lists.h"
/**
 * add_node_end - add a node in the ond o the list
 * @head: is a pointer to head of the list
 * @str: the str to include in the new node
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *actual = *head;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		for (; actual->next != NULL; actual = actual->next)
			;
	}

	actual->next = new_node;
	return (new_node);
}
