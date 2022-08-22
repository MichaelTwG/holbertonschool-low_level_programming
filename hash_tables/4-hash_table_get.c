#include "hash_tables.h"
/**
 * hash_table_get - obtain a value associated with a specific key
 * @ht: table
 * @key: key
 * Return: Return specific value associeted otherwise NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *p;

	if (!ht)
		return (NULL);
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (strcmp(p->key, strdup(key)) == 0)
			{
				return (p->value);
			}
			p = p->next;
		}
	}
	return (NULL);
}
