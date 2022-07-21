#include "lists.h"
/**
 * print_dlistint - prit all elements in a dlistint_t
 * @h: the header of dlistint_t
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *actual;
	int i = 0;

	if (!h)
		return (0);
	actual = h;
	for (; actual; actual = actual->next, i++)
	{
		printf("%d\n", actual->n);
	}
	return (i);
}
