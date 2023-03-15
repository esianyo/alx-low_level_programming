#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer of a 2d array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: returns Null if failed,
 * or 0
 */

int **alloc_grid(int width, int height)
{

	int **mat;
	int x, y;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	mat = malloc(height * sizeof(int *));
	if (mat == 0)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		mat[x] = malloc(width * sizeof(int));
		if (mat[x] == 0)
		{
			for (y = 0; y < x; y++)
				free(mat[y]);
			free(mat);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			mat[x][y] = 0;
	}
	return (mat);
}
