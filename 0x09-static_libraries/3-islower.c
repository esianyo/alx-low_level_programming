#include "main.h"
/**
 * _islower - Checks for lowercase
 * @c: Will be checked
 *
 * Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
