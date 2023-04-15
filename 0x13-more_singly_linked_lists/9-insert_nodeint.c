#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to head of the list
 * @idx: the index of the list
 * @n: member of new node
 *
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *hold, *old;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	else
	{
		hold = *head;

		for (i = 0; i < idx; i++)
		{
			old = hold;
			hold = hold->next;

			if (hold == NULL && i != idx - 1)
			{
				free(new);
				return (NULL);
			}
		}

		new->next = hold;
		old->next = new;
	}

	return (new);
}
