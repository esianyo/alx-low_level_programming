#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
