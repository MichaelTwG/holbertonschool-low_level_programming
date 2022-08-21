#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: is the size of the hash_table
 * Return: a pointer to the new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t new_table;

    new_table.size = size;
    new_table.array = malloc(sizeof(hash_node_t *) * size);

    if (!(new_table.array))
        return (NULL);
    else
        for (int i = 0; new_table.array[i]; i++)
        {
            new_table.array[i] = malloc(sizeof(hash_node_t *));
            if (!(new_table.array[i]))
            {
                for (; i >= 0; i--)
                {
                    free(new_table.array[i]);
                }
                free(new_table.array);
                return (NULL);
            }
        }
        return (&new_table);
}