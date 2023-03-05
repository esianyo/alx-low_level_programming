#include <stdlib.h>
#include "main.h"
/**
 * _strpbrk - gets a string for any set of bytes
 *
 * @s: string to search
 * @accept: the bytes to accept
 *
 * Return: a pointer to byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
