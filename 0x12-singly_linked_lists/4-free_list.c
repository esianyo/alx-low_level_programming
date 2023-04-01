#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: head pointer
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t recent;

	while (head != NULL)
	{
		recent = head;
		head = head->next;
		free(recent->str);
		free(recent);
	}
}
