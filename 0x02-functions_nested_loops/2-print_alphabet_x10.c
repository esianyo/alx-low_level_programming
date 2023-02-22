#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets ten times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int i;

	while (i <= 9)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
			_putchar(alphabets);
		_putchar('\n');
	}
}
