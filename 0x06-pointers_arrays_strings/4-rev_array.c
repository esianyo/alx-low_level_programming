#include "main.h"
/**
 * reverse_array - reverse contents of array
 * @a: arrary of ints
 * @n: size of array
 * Description: reverse contents of int array
 * Return: nothing
 **/

void reverse_array(int *a, int n)
{
	int u, temp;

	u = 0;

	for (u = 0; u < n; u++)
	{
		temp = a[n - 1];
		a[n - 1] = a[u];
		a[u] = temp;
		n--;
	}
}
