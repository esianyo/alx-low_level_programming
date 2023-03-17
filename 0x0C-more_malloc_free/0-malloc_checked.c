#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * malloc_checked - causes normal process termination with a status value of 98
 * @b: integer variable
 *
 * Return: pointer a
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
