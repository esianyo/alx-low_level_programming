#include "main.h"
#include <string.h>
/**
 * _strlen - Returns the length of a string
 * @s: string variable
 *
 * Return: Always cnt.
 */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}
