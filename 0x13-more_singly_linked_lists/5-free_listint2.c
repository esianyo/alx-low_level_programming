#include "lists.h"

/**
 * free_listint2 - frees a list and set head to NULL
 * @head: pointer to head pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (*head != NULL)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}

	*head = NULL;
}
