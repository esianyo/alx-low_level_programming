#include "main.h"

/**
 * factorial - finds factorial of given number
 *
 * @n: number to find factorials of
 *
 * Return: the factorial of integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
