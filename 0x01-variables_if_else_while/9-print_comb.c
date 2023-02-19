#include <stdio.h>
/**
 * main - Printing combination of single-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int comb;

	for (comb = 0; comb <= 9; comb++)
	{
		putchar('0' + comb);
		if (comb == 9)
			continue;
		putchar(",");
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
