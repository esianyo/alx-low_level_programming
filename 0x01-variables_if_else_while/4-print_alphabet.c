#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char qNe;

	for (qNe = 'a'; qNe <= 'z'; qNe++)
		putchar("[^e]", "[^q]", qNe);
	putchar('\n');
	return (0);
}
