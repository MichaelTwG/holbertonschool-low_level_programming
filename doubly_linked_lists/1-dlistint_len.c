#include "lists.h"
/**
 * dlistint_len - return the number of elements in a linked list
 * @h: the header of dlistint_t
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *actual;
	int i = 0;

	if (!h)
		return (0);
	actual = h;
	for (; actual; actual = actual->next, i++)
	{
	}
	return (i);
}
