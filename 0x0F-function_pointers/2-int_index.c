#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - index function
 * @array: array of indexes
 * @size: size of array
 * @cmp: pointer to int_index
 *
 * Return: -1 for success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i, j;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[0]) != 0)
		{
			return (-1);
		}
	}
	return (-1);
}
