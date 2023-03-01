#include "main.h"

/**
 * _strncat - concatenates src to dest
 * @src: string variable to copy
 * @dest: to be overwritten
 * @n: variable to be concatenated
 * Description: concatenates n number of values from src to end of dest
 *
 * Return: brings back dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
		a++;

	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}

	if (dest[a - 1] != '\0')
		dest[a] = '\0';

	return (dest);
}
