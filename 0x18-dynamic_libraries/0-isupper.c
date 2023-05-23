#include "main.h"
/**
 * _isupper - Checks for uppercase characters.
 * @ch: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
