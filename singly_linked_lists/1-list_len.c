#include "lists.h"
/**
 * list_len - print the number
 * @h - is a pointer to list_t
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *actual = h;
	if (h)
	{
		for (; actual; actual = actual->next)
			i++;
	}
	return (i);
}
