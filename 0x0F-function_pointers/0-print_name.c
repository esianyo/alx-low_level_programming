#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @f: pointer to function
 * @name: name variable
 *
 * Return: empty
 */

void print_name(char *name, void (*f)(char *))
{
	if !(name)
		return (NULL);
	f(name);
}
