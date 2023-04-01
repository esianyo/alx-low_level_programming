#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head pointer
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	for (; h != NULL; h = h->next, counter++)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}
	return (counter);
}
