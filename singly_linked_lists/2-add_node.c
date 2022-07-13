#include "lists.h"
/**
 * add_node - add a node in the start
 *
 * @head: pointer to the first node
 * @str: is the str to include in the struct
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = strlen(str);
	char *strcpy = strdup(str);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->len = len;
	new->str = strcpy;
	new->next = (*head);
	*head = new;

	return (new);
}
