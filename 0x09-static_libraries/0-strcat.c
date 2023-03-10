#include "main.h"

/**
 * _strcat - the function appends src string to dest
 * overwriting the terminating null byte (\0) at the end of dest
 *
 * and then a terminating \0 byte
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
