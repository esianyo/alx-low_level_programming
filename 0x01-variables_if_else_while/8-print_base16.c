#include <stdio.h>
/**
 * main - To print numbers in base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int number;
	char letters;

	for (number = 0; number < 10; number++)
		putchar('0' + number);
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
