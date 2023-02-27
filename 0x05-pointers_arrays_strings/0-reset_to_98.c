#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int a;

	a = 98;
	n = &a;
}
