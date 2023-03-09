#include "main.h"

/**
 * _pow_recursion - sqares x with y
 *
 * @x: number variable
 * @y: the exponential value
 *
 * Return: returns value of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
