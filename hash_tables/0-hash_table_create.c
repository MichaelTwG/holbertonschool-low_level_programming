#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: is the size of the hash_table
 * Return: a pointer to the new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;

    new_table = malloc(sizeof (hash_table_t *));
    if (!new_table)
        return (NULL);

    new_table->size = size;
    new_table->array = malloc(sizeof(hash_node_t *) * size);

    if (!(new_table->array))
    {
        free(new_table);
        return (NULL);
    }

    return (new_table);
}