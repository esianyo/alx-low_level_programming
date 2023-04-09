#include "main.h"

/**
 * get_bit - returns value of bit at a given index
 * @n: binary variable
 * @index: binary position
 *
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (!n)
		return (-1);
	else
		return ((n >> index) & 1);
}
