#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The real function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	if (last > 5)
		printf("Last digit of %d\n is %d\n and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d\n is %d\n and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d\n is %d\n and is less than 6 and not 0\n", n, last);
	else
		printf("Try again");
	return (0);
}
