#include "lists.h"

/**
 * listint_len - prints number of elements
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
		h = h->next;
	return (count);
}
