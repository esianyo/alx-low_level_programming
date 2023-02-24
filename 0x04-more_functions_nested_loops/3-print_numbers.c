#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: Always 0.
 */
int print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');

	_putchar('\n');
}
