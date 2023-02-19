#include <stdio.h>
/**
 * main - Prints alphabets in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse <= 'a'; reverse--)
		putchar(reverse);
	putchar('\n');
	return (0);
}
