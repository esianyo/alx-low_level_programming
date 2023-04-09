#include "main.h"

/**
 * flip_bits - returns number of bits needed
 *		to flip to get from one number to another
 * @n: number one
 * @m: number two
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int amount = 0;
	unsigned long int flip;

	flip = n ^ m;

	while (flip)
	{
		amount = amount + (flip & 1);
		flip >>= 1;
	}

	return (amount);
}
