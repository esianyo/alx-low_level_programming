#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: 0 for success
 */

int *array_range(int min, int max)
{
	int i;
	int *z;

	if (min > max)
		return (NULL);

	z = malloc(sizeof(int) * (max - min + 1));

	if (z == 0)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		z[i] = min;
	return (z);
}
