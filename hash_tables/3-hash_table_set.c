#include "hash_tables.h"
/**
 * hash_table_set - add element to the hash table
 * @ht: hash table you want add a key/value
 * @key: key and cannot empty string
 * @value: value associated to key, can be empty
 * Return: 1 if success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int key_indexx;

	if (!ht)
		return (0);
	key_indexx = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (!(ht->array)[key_indexx])
	{
		(ht->array)[key_indexx] = node;
	}
	else
	{
		if (strcmp(((ht->array)[key_indexx])->key, key) == 0)
		{
			((ht->array)[key_indexx])->value = strdup(value);
		}
		else
		{
			node->next = (ht->array)[key_indexx];
			(ht->array)[key_indexx] = node;
		}
	}
	return (1);
}
