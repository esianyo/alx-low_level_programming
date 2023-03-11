#include <stdio.h>
#include "main.h"

/**
 * main - prints a program's name
 * @argc: counts number of arguments
 * @argv: array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
