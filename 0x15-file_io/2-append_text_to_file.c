#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fhandle;

	if (filename == NULL)
	{
		return -1;
	}

	fhandle = fopen(filename, "a");

	if (fhandle == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fputs(text_content, fhandle);
	}

	fclose(fhandle);
	return (1);
}
