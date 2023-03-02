#include "main.h"

/**
 * _strncpy - copies string
 * @src: string to copy from
 * @dest: string to overwrite
 * @n: values to be copied
 * Description: copy string
 * Return: pointer to dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}

	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}

	return (dest);
}
