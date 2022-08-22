#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *tmp;

	if (!ht)
		return;

	for (i = 0; ht && i < ht->size; i++)
	{
		p = (ht->array)[i];
		while (p->next)
		{
			tmp = p->next;
			free(p->key);
			free(p->value);
			if (p->next)
			{
				free(p);
				p = tmp;
			}
		}
		free(p->key);
		free(p->value);
		free(p);
		free(ht->array);
		free(ht);
	}
}

