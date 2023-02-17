#include <stdio.h>
/**
 *main - This is the entry point
 *
 *Return: Always 0 (Succes)
 */
int main(void)
{
int num1;
long int num2;
long long int num3;
char num;
float num0;

printf("Printing size of int: %lu byte(s)\n", (unsigned long)sizeof(num1));
printf("Printing size of float: %lu byte(s)\n", (unsigned long)sizeof(num0));
printf("Printing size of long int: %lu byte(s)\n", (unsigned long)sizeof(num2));
printf("Printing size of char: %lu byte(s)\n", (unsigned long)sizeof(num));
printf("Printing size of long long int: %lu byte(s)\n", (unsigned long)sizeof(num3));
return (0);
}
