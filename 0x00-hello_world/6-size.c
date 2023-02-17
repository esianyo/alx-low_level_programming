#include <stdio.h>
/**
 *main - This is the entry point
 *
 *Return: Always 0 (Succes)
 */
int main(void)
{
int a;
long int c;
long long int e;
char d;
float b;

printf("Printing size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Printing size of float: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Printing size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Printing size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Print size of long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
