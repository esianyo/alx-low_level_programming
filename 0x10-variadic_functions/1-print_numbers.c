#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - using separator to separate printed numbers
 * @separator: string separator varaible
 * @n: unknown number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;

	va_start(mylist, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
