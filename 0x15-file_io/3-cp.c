#include "main.h"

#define BUF_SIZE 1024;


/**
 * main - entry
 * @argc: argument counter
 * @argv: number of arguments
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	FILE *fp_from, *fp_to;
	int status;
	size_t len;
	char buf[];

	if (argc != 3) {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}


	fp_from = fopen(argv[1], "r");
	if (fp_from == NULL) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}


	fp_to = fopen(argv[2], "w+");
	if (fp_to == NULL) {
		fclose(fp_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buf[BUF_SIZE];
	while ((len = fread(buf, 1, BUF_SIZE, fp_from)) > 0) {
		if (fwrite(buf, 1, len, fp_to) != len) {
			fclose(fp_from);
			fclose(fp_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	status = chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (status != 0) {
		fclose(fp_from);
		fclose(fp_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fclose(fp_from) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(fp_from));
		exit(100);
	}
	if (fclose(fp_to) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(fp_to));
		exit(100);
	}
	return (0);
}
