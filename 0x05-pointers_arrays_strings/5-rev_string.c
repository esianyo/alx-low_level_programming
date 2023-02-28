#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: string variable
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char back = s[0];
	int cnt = 0;
	int i;

	while (s[cnt] != '\0')
		cnt++;
	for (i = 0; i < cnt; i++)
	{
		cnt--;
		back = s[i];
		s[i] = s[cnt];
		s[cnt] = back;
	}
}
