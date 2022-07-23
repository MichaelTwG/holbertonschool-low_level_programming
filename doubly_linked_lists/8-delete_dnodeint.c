#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index indes of a list
 * @head: the head of the list
 * @index: the nth node to delete
 * Return: 1 in succes and -1 if it falls
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *actual = (*head), *temp, *temp_2;
	unsigned int i;

	if (!(*head) || !(*head)->next)
		return (-1);
	if (index == 0)
	{
		(*head) = actual->next;
		temp_2 = actual->next;
		temp_2->prev = NULL;
		free(actual);
		return (1);
	}
	for (i = 0; actual && i <= index; i++)
	{
		if (i == index - 1)
		{
			temp = actual;
			actual = actual->next;
			temp->next = actual->next;
			temp_2 = actual;
			if (actual->next)
			{
				temp_2 = temp_2->next;
				temp_2->prev = temp;
			}
			free(actual);
			return (1);
		}
		actual = actual->next;
	}
	return (-1);

}
