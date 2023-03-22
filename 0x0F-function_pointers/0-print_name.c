#include "function_pointers.h"
#include <string.h>

/**
 * print_name - prints a name
 * @f: pointer to function
 * @name: name variable
 *
 * Return: empty
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
