#include "main.h"

/**
 * my_function - finds square roots of two numbers
 *
 * @a: actual number
 * @b: tests for the square root of @a
 *
 * Return: the root of @a
 */

int my_function(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (my_function(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - finds the natural root of a number
 *
 * @n: variable
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (my_function(n, 1));
}
