#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 0; first < 8; first++)
	{
		for (second = first + 1; second < 9; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
				putchar('0' + first);
				putchar('0' + second);
				putchar('0' + third);

				if (first == 7 && second == 8 && third == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
