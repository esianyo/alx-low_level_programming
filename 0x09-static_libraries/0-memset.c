#include "main.h"

/**
 * _memset - fills memory with bytes
 * @s: pointer variable
 * @n: number of memory bytes
 * @b: constant byte
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
