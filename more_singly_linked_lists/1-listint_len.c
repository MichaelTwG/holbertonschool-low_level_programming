#include "lists.h"
/**
 * listint_len - return the number of nodes
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *actual = h;
	size_t number_of_nodes = 0;

	for (; actual; actual = actual->next)
	{
		number_of_nodes++;
	}
	return (number_of_nodes);
}
