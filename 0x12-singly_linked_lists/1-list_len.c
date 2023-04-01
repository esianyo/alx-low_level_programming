#include "lists.h"
#include <stddef.h>

/**
 * list_len - prints number of elements in a linked list
 * @h: head pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int iterate;

	if (h == NULL)
		return (0);

	for (iterate = 1; h->next != NULL; iterate++)
		h = h->next;
	return (iterate);
}
