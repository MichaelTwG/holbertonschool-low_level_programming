#include "lists.h"
/**
 *
 *
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
