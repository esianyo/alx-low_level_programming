#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - this function reads and prints a file
 * @filename: storage of file
 * @letters: holds the number of letters
 *
 * Return: actual number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	char *buffer;
	ssize_t reads, text;

	if (filename == NULL)
		return (0);

	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fdes);
		return (0);
	}

	reads = read(fdes, buffer, letters);
	if (reads == -1)
	{
		close(fdes);
		free(buffer);
		return (0);
	}

	buffer[reads] = '\0';

	text = write(STDOUT_FILENO, buffer, reads);
	if ((text == -1) || (text != reads))
	{
		close(fdes);
		free(buffer);
		return (0);
	}

	close(fdes);
	free(buffer);

	return (reads);
}
