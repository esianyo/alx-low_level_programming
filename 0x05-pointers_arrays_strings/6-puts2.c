#include "main.h"
/**
 * puts2 - prints character starting with first
 * @str: character variable
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a = 0;
	int i = 0;
	char *x = str;
	int z;

	while (*x != '\0')
	{
		x++;
		a++;
	}
	i = a - 1;
	for (z = 0; z <= i; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
