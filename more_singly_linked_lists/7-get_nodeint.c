#include "lists.h"
/**
 * get_nodeint_at_index - return the addres of the nth node
 * @head: the head of the list
 * @index: the nth node to find
 * Return: pointer to the struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *actual = head;
	unsigned int i = 0;

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
