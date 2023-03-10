#include "main.h"
#include <string.h>

/**
 * assistant - checks for a palindrome string
 * @begin: beginning of index
 * @stop: ending of index
 *
 * Return: returns 1 if palindrome
 */

int assistant(char *s, int begin, int stop)
{
	if (begin >= stop)
	{
		return (1);
	}
	else if (s[begin] != s[stop])
	{
		return (0);
	}
	else
	{
		return (assistant(s, begin + 1, stop - 1));
	}
}


/**
 * is_palindrome - checks for a palindrome string
 * @s: variable for string
 *
 * Return: returns 1 if palindrome
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	else
	{
		return (assistant(s, 0, len - 1));
	}
}
