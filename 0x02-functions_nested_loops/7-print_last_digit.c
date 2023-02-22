#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: concerned
 *
 * Return: Last digit value
 */
int print_last_digit(int i)
{
	int last = i % 10;

	if (i < 0)
		last *= -1;
	_putchar(last + '0');

	return (last);
}
