#include <stdio.h>
/**
 * main - To print numbers in base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int number;
	char letters;

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
