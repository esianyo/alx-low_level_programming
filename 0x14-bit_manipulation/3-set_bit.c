#include "main.h"

/**
 * set_bit - returns value of bit at a given index
 * @n: binary variable
 * @index: binary position
 *
 * Return: either 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 7)
		return (-1);

	*n |= 1 << index;

	return (1);
}
