#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = 1;
	*b = 2;

	int c = a;

	a = b;
	b = c;
}
