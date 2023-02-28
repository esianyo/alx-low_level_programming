#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int pswd[100];
	int i, total, a;

	total = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 78;
		total += (pswd[i] + '0');
		putchar(pswd[i] + '0');
		if ((2772 - total) - '0' < 78)
		{
			a = 2772 - total - '0';
			total += a;
			putchar(a + '0');
			break;
		}
	}
	return (0);
}
