#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: initial string
 * @s2: duplicated string
 *
 * Return: outcome
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result = strdup(s1);

	if (result == NULL)
	{
		return (NULL);
	}

	result = realloc(result, strlen(s1) + strlen(s2) + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcat(result, s2);

	return (result);
}
