#include <stdio.h>

/**
 * main - prints all arguments passed to it
 * @argc: counter
 * @argv: vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return 0;
}
