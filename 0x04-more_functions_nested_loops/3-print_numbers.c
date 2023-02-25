#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar ('0' + num);

	_putchar('\n');
	return (0);
}
