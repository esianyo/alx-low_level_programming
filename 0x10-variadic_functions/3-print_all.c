#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - responds to specific print request
 * @format: request variable
 */

void print_all(const char * const format, ...)
{
	int a;
	int flag;
	char *str;
	va_list mylist;

	va_start(mylist, format);
	a = 0;

	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(mylist, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(mylist, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(mylist, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(mylist, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[a + a] != '\0' && flag == 0)
			printf(", ");
		a++;
	}
	printf("\n");
}
