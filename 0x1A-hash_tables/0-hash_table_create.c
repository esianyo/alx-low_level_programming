#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a new hash table
 * @size: size of the array
 *
 * Return: pointer to the new hash table, NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(size * sizeof(hash_node_t *));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;
	return (hash_table);
}
