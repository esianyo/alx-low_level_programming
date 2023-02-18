#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char lower_case = 'a..z';
	char upper_case = 'A..Z';

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar("%s", "%s\n", lower_case, upper_case);
	}
	return (0);
}
