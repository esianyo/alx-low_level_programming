#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print string and separate by separator
 * @separator: string variable
 * @n: unknown number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	char *str;
	unsigned int index;

	va_start(mylist, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(mylist, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(mylist);
}
