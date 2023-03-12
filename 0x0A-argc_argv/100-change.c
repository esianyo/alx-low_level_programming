#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 for success and 1 for error
 */

int main(int argc, char **argv)
{
	int sum, cent;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	for (sum = 0; cent > 0; sum++)
	{
		if (cent - 25 >= 0)
			cent = cent - 25;
		else if (cent - 10 >= 0)
			cent = cent - 10;
		else if (cent - 5 >= 0)
			cent = cent - 5;
		else if (cent - 2 >= 0)
			cent = cent - 2;
		else if (cent - 1 >= 0)
			cent = cent - 1;
	}
	printf("%d\n", sum);
	return (0);
}
