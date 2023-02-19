#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int num, num1;

	for (num = 0; num <= 99; num++)
	{
		for (num1 = num + 1; num1 <= 99; num1++)
		{
			putchar('0' + num);
			putchar('0' + num);
			putchar(' ');
			putchar('0' + num1);
			putchar('0' + num1);

			if (num == 99 && num1 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
