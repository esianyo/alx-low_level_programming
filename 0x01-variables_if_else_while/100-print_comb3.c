#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int first;
	int second;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; digit2 < 10; second++)
		{
			putchar('0' + first);
			putchar('0' + second);

			if (first == 8 && second == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
