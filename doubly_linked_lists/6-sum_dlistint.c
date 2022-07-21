#include "lists.h"
/**
 * sum_dlistint - sum all the values of the nodes
 * @head: the head of the linked list
 * Return: the result of the adds
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *actual;
	int res = 0;

	if (!head)
		return (0);

	actual = head;

	for (; actual; actual = actual->next)
	{
		res += actual->n;
	}
	return (res);
}
