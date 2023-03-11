#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: counts number of arguments
 * @argv: array of string pointers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argv;
	
	for (i = 0; i <= argc; i++)
	{}
	printf("argc = %d\n", i - 2);

	return (0);
}
