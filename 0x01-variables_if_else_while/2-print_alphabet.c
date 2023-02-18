#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(str(lower_case)+"\n");
	}
	return (0);
}
