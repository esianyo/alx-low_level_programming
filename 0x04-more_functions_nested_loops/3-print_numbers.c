#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}

	_putchar('\n');
}
