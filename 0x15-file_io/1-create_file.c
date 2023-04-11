#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a text file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fdes, res;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fdes == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		res = write(fdes, text_content, len);
		if (res == -1 || res != len)
		{
			close(fdes);
			return (-1);
		}
	}

	close(fdes);

	return (1);
}
