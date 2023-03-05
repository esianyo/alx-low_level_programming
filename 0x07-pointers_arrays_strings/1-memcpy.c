#include "main.h"

/**
 * _memcpy - copies bytes from memory
 * @dest: destination area
 * @src: source area
 * @n: number of bytes
 *
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);

}
