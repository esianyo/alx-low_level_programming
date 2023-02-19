#include <stdio.h>
/**
 * main - Print numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(str(num));
	putchar('\n');
	return (0);
}
