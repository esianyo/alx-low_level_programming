#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char lower_upper;

	for (lower_upper = 'a'; lower_upper <= 'z'; lower_upper++)
		putchar(lower_upper);
	for (lower_upper = 'A'; lower_upper <= 'Z'; lower_upper++)
		putchar(lower_upper);
	putchar('\n');
	return (0);
}
