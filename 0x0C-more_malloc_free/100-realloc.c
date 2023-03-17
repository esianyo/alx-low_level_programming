#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer
 * @old_size: old memory locatio
 * @new_size: new memory location
 *
 * Return: returns a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *cur;
	char *prev;

	prev = ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == 0)
	{
		cur = malloc(new_size * sizeof(char));
		return (cur);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}

	cur = malloc(new_size * sizeof(char));

	if (cur == 0)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0;  < new_size; i++)
			cur[i] = prev[i];
		return (cur);
	}
	free(ptr);
	return (cur);
}
