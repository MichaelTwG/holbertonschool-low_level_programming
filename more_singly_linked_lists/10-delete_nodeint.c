#include "lists.h"
/**
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleted, *actual;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	actual = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		actual->next = NULL;
		free(actual);
		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			actual = actual->next;
			if (!actual || !(actual->next))
			{
				return (-1);
			}
		}
		deleted = actual->next;
		actual->next = actual->next->next;
		deleted->next = NULL;
		free(deleted);
		return (1);
	}
}
