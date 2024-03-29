#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: pointer to function
 * @name: name variable
 *
 * Return: empty
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
