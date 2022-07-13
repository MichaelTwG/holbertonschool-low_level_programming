#include "lists.h"
/**
 * print_list - display on the screen all the nodes
 * h: is the struct
 * Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *actual = h;

	for(i = 0; actual; actual = actual->next, i++)
	{
		if(actual->str)
		{
			printf("[%u] %s", actual->len, actual->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		printf("\n");
	}
	return (i);
}
