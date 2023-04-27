#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>
#include <string.h>
#include "main.h"

/**
 * main - the main entry
 * @argc: argument counter
 * @argv: pointer to all arguments
 */

/**
 * This program reads the ELF header of an ELF file
 * and displays the information contained in it.
 * The ELF header contains important information such as the type of the file,
 * the machine it was compiled for, and the entry point address.
 * The program takes the name of the ELF file as a command line argument.
 * It then opens the file, reads the ELF header,
 * and prints out the relevant information.
 * If the file is not a valid ELF file, an error message is displayed.
 */

int main(int argc, char **argv)
{
	int fd;
	char magic[4];
	Elf64_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filenamen");
		return (1);
	}


	fd= open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		display_error("Error opening filen");
		return (98);
	}


	if (read(fd, magic, 4) != 4)
	{
		display_error("Error reading magic numbern");
		close(fd);
		return (98);
	}

	if (memcmp(magic, ELFMAG, 4) != 0)
	{
		display_error("Not an ELF filen");
		close(fd);
		return (98);
	}


	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		display_error("Error seeking to beginning of filen");
		close(fd);
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		display_error("Error reading ELF headern");
		close(fd);
		return (98);
	}

	display_elf_header(&header);

	close(fd);
	return (0);
}

/**
 * display_error - prints message
 * @msg: message container
 */

void display_error(char *msg)
{
	fprintf(stderr, "%s: %sn", msg, strerror(errno));
}

/**
 * display_elf_header - displays header
 * @header: the header pointer
 */

void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("n");

	printf("Class: %d-bitn", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

	printf("Data: ");

	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endiann");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endiann");
			break;
		default:
			printf("Unknown data formatn");
			break;
	}

	printf("Version: %dn", header->e_ident[EI_VERSION]);

	printf("OS/ABI: ");

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABIn");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABIn");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABIn");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABIn");
			break;
		default:
			printf("Unknown OS/ABIn");
			break;
	}

	printf("ABI Version: %dn", header->e_ident[EI_ABIVERSION]);

	printf("Type: ");

	switch (header->e_type)
	{
		case ET_NONE:
			printf("No file typen");
			break;
		case ET_REL:
			printf("Relocatable filen");
			break;
		case ET_EXEC:
			printf("Executable filen");
			break;
		case ET_DYN:
			printf("Shared object filen");
			break;
		case ET_CORE:
			printf("Core filen");
			break;
		default:
			printf("Unknown file typen");
			break;
	}

	printf("Entry point address: 0x%lxn", header->e_entry);
}
