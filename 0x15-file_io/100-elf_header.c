#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 *print_elf_header_info - prints header info
 *@header: pointer
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass:   %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type:    %s\n", header->e_type == ET_EXEC ? "Executable" : (header->e_type == ET_DYN ? "Shared object" : "Other"));
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 *main - entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: always success
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", argv[1]);
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header from file: %s\n", argv[1]);
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || 
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file: %s\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
