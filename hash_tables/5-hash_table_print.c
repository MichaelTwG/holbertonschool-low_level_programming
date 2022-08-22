#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: table
 * Return: if ht dosent exist dont print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	int n = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (n != 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", p->key, p->value);
			p = p->next;
			n = 1;
		}
	}
	printf("}\n");
}
