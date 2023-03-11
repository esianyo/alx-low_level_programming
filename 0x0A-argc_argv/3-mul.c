#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - it multiplies two numbers
 *
 * @argc: counter
 * @argv: vector
 *
 * Return: 0 if it works, 1 if there is an ERROR
 */

int main(int argc, char *argv[])
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff = n * m;

	printf("%i\n", diff);

	return (0);
}
