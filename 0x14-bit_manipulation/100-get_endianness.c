#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks endianness
 *
 * Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)
{
	int type = 1;
	char *c = (char *)&type;

	if (*c)
		return (1);
	else
		return (0);

	/* return (type); */
}
