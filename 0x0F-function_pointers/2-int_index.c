#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - index function
 * @array: array of indexes
 * @size: size of array
 * @cmp: pointer to int_index
 *
 * Return: -1 success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
