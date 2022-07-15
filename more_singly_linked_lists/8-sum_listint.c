#include "lists.h"
/**
 * sum_listint - adds the value of all the nodes in the list
 * @head: is the head of the list
 * Return: the result value of the adds
 */
int sum_listint(listint_t *head)
{
	listint_t *actual;
	int result = 0;

	if (!head)
	{
		return (0);
	}

	actual = head;

	for (; actual ; actual = actual->next)
	{
		result += actual->n;
	}
	return (result);
}
