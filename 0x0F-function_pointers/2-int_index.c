#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - index function
 * @array: array of indexes
 * @size: size of array
 * @cmp: pointer to int_index
 *
 * Return: 0 for success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
