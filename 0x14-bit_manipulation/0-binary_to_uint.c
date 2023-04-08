#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: variable for binary digits
 *
 * Return: unsigned integer or 0
 */ 

unsigned int binary_to_uint(const char *b)
{
	int count, outcome = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}

		outcome = (outcome * 2) + (b[count] - '0');
	}
	return (outcome);
}
