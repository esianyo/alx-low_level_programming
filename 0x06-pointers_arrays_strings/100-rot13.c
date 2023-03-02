#include "main.h"

/**
 * rot13 - encode string with rot13
 * @src: string to encode
 * Return: string
 **/

char *rot13(char *src)
{
	char c[] = {"NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm"};

	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		if (src[l] >= 'A' && src[l] <= 'z')
			src[l] = c[src[l] - 'A'];
	}
	return (src);
}
