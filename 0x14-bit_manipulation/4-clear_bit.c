#include "main.h"

/**
 * clear_bit - set bit at a given index to 0
 * @n: binary variable pointer
 * @index: binary position
 *
 * Return: 1 for success or -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 7)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
