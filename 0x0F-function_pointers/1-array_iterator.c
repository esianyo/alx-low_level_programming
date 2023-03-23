#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates array
 * @array: the array
 * @size: the size
 * @action: the function pointer
 *
 * Return: empty
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
