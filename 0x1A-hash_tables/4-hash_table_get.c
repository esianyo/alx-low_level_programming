#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table to look into.
 * @key: The key to look for.
 *
 * Return: The value associated with the element, or NULL if key couldn’t be found.
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
