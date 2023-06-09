#include "hash_tables.h"
#include <stddef.h>

/**
 * key_index - gets the index at which the key should be stored
 * @key: the key string
 * @size: size of the hash array
 *
 * Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
