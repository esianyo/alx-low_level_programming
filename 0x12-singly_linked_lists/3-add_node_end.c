#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to first node
 * @str: string variable
 *
 * Return: pointer head of linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *add_node;


	tmp = *head;
	if (head == NULL)
		return (NULL);
	add_node = create_node(str);
	if (add_node == NULL)
		return (NULL);
	if (*head == NULL) /*Initilizing the list with the first node*/
	{
		*head = add_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = add_node;
	return (*head);
}

/**
 * create_node - adds a new node.
 * @str: String variable
 *
 * Return: pointer allocated memory
 */

list_t *create_node(const char *str)
{
	list_t *add_node;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	add_node->str = strdup(str);
	add_node->len = len(str);
	add_node->next = NULL;
	return (add_node);
}

/**
 * len - prints length of a string.
 * @str: unchangeable string
 *
 * Return: length of string
 */

int len(const char *str)
{
	int iterate;

	if (str == NULL)
		return (0);
	for (iterate = 0; str[iterate] != '\0'; iterate++)
		;
	return (iterate);
}
