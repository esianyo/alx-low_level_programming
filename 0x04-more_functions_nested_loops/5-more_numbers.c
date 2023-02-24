#include "main.h"
/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int num, countr;

	for (countr = 0; countr <= 9; countr++ )
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar('0' + num / 10);
		}
		_putchar('0' + num % 10);
	}
}
