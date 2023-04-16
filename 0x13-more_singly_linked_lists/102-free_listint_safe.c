#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: list to free
 *
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	unsigned int count = 0;

	while (*h)
	{
		temp = *h;
		(*h) = (*h)->next;
		free(temp);
		count++;
	}
	*h = NULL;
	return (count);
}
