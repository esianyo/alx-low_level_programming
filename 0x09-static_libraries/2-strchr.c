#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string pointer variable
 * @c: character variable
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
