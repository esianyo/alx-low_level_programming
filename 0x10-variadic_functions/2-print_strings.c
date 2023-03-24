#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string and separate by separator
 * @separator: string variable
 * @n: unknown number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list mylist;

	va_start(mylist, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(a_list, char*);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
