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
	int upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		{
			putchar(lower_case);
		}
	return (0);
}

