#include "main.h"

/**
 * prime - checks if a number is prime
 *
 * @a: main number
 * @b: numbers to screen
 *
 * Return: prime status of a number
 */

int prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		prime(a, b + 1);

	return (1);
}

/**
 * is_prime_number - prime status of a number
 * @n: input number
 *
 * Return: 0 if not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
