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

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations = sizeof(denominations) / sizeof(int);

	for (int i = 0; i < num_denominations; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
