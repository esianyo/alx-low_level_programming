#include <stdarg.h>

/**
 * sum_them_all - adding numbers
 * @n: number of parameters
 * Return: 0 for succes
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list mylist;

	sum = 0;
	va_start(mylist, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(mylist, int);

	return (sum);
}
