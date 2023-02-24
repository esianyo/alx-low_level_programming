#include "main.h"
/**
 * print_most_numbers - Prints most numbers
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar('0' + num);
	}

	_putchar('0' + num);
}
