#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head pointer
 * @str: string variable in the list
 *
 * Return: head pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	size_t iterate;

	add_node = malloc(sizeof(list_t));

	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);

	for (iterate = 0; str[iterate]; iterate++)
		;

	add_node->len = iterate;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
