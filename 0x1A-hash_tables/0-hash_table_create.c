#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;
    unsigned long int i;

    /* allocate memory for the hash table struct */
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return NULL;

    /* allocate memory for the nodes */
    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return NULL;
    }

    /* initialize each element of the array to NULL */
    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    /* set the size of the hash table */
    new_table->size = size;

    return new_table;
}

