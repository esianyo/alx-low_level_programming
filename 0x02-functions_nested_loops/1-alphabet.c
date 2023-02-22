#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char low_alpha;

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
		_putchar(low_alpha);
	_putchar('\n');
}
