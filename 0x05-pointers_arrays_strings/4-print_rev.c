#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string variable
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;
	int z;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (z = i; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
