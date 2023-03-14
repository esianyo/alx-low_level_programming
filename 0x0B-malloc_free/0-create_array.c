#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - allocates enough memory
 * @c: character variable
 * @size: size to be assigneed
 *
 * Return: returns pointer
 */

char *create_array(unsigned int size, char c)
{
	char *myPointer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	myPointer = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		myPointer[i] = c;
	}
	return (myPointer);
}
