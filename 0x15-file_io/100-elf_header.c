#include "main.h"

/**
 * isELF - checks if the file is an ELF file
 * @ehdr: elf header to be checked
 * Return: 1 if header is for ELF file and 0 if otherwise
 */
int isELF(Elf64_Ehdr ehdr)
{
	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
		ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
		ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
		ehdr.e_ident[EI_MAG3] != ELFMAG3)
		return (0);

	return (1);
}

/**
 * printELFHeaderInfo - prints the ELF header information
 * @ehdr: elf header to be checked
 */
void printELFHeaderInfo(Elf64_Ehdr ehdr)
{
	int i;

	write(STDOUT_FILENO, "ELF Header:\n", 12);
	write(STDOUT_FILENO, "  Magic:  ", 10);
	for (i = 0; i < EI_NIDENT; i++)
	{
		dprintf(STDOUT_FILENO, "%02x ", ehdr.e_ident[i]);
	}
	write(STDOUT_FILENO, "\n", 1);

	write(STDOUT_FILENO, "  Class:                             ", 37);
	switch (ehdr.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			write(STDOUT_FILENO, "none\n", 5);
			break;
		case ELFCLASS32:
			write(STDOUT_FILENO, "ELF32\n", 6);
			break;
		case ELFCLASS64:
			write(STDOUT_FILENO, "ELF64\n", 6);
			break;
		default:
			dprintf(STDOUT_FILENO, "<unknown: %d>\n", ehdr.e_ident[EI_CLASS]);
	}

	write(STDOUT_FILENO, "  Data:                              ", 37);
	switch (ehdr.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			write(STDOUT_FILENO, "none\n", 5);
			break;
		case ELFDATA2LSB:
			write(STDOUT_FILENO, "2's complement, little endian\n", 30);
			break;
		case ELFDATA2MSB:
			write(STDOUT_FILENO, "2's complement, big endian\n", 27);
			break;
		default:
			dprintf(STDOUT_FILENO, "<unknown: %d>\n", ehdr.e_ident[EI_DATA]);
	}

	dprintf(STDOUT_FILENO, "  Version:                           %d (current)\n", ehdr.e_ident[EI_VERSION]);

	write(STDOUT_FILENO, "  OS/ABI:                            ", 37);
	switch (ehdr.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			write(STDOUT_FILENO, "UNIX - System V\n", 16);
			break;
		case ELFOSABI_HPUX:
			write(STDOUT_FILENO, "UNIX - HP-UX\n", 13);
			break;
		case ELFOSABI_NETBSD:
			write(STDOUT_FILENO, "UNIX - NetBSD\n", 14);
			break;
		case ELFOSABI_LINUX:
			write(STDOUT_FILENO, "UNIX - Linux\n", 13);
			break;
		case ELFOSABI_SOLARIS:
			write(STDOUT_FILENO, "UNIX - Solaris\n", 15);
			break;
		case ELFOSABI_IRIX:
			write(STDOUT_FILENO, "UNIX - IRIX\n", 12);
			break;
		case ELFOSABI_FREEBSD:
			write(STDOUT_FILENO, "UNIX - FreeBSD\n", 15);
			break;
		case ELFOSABI_TRU64:
			write(STDOUT_FILENO, "UNIX - TRU64\n", 13);
			break;
		case ELFOSABI_ARM_AEABI:
			write(STDOUT_FILENO, "ARM EABI\n", 9);
			break;
		case ELFOSABI_ARM:
			write(STDOUT_FILENO, "ARM\n", 4);
			break;
		case ELFOSABI_STANDALONE:
			write(STDOUT_FILENO, "Standalone App\n", 15);
			break;
		default:
			dprintf(STDOUT_FILENO, "<unknown: %d>\n", ehdr.e_ident[EI_OSABI]);
	}

	dprintf(STDOUT_FILENO, "  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);

	write(STDOUT_FILENO, "  Type:                              ", 37);
	switch (ehdr.e_type)
	{
		case ET_NONE:
			write(STDOUT_FILENO, "NONE (No file type)\n", 20);
			break;
		case ET_REL:
			write(STDOUT_FILENO, "REL (Relocatable file)\n", 23);
			break;
		case ET_EXEC:
			write(STDOUT_FILENO, "EXEC (Executable file)\n", 24);
			break;
		case ET_DYN:
			write(STDOUT_FILENO, "DYN (Shared object file)\n", 25);
			break;
		case ET_CORE:
			write(STDOUT_FILENO, "CORE (Core file)\n", 17);
			break;
		default:
			dprintf(STDOUT_FILENO, "<unknown: %d>\n", ehdr.e_type);
	}

	dprintf(STDOUT_FILENO, "  Entry point address:               %#lx\n", (unsigned long)ehdr.e_entry);
}

/**
 * main - opens, reads and prints ELF header of the specified file.
 * @argc: number of command-line arguments
 * @argv: command line arguments
 * Return: Return zero
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;
	ssize_t nread;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	/* Open the ELF file */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Cannot open file\n", 24);
		exit(98);
	}

	/* Read the ELF header */
	nread = read(fd, &ehdr, sizeof(ehdr));
	if (nread != sizeof(ehdr))
	{
		write(STDERR_FILENO, "Error: Cannot read ELF header\n", 29);
		close(fd);
		exit(98);
	}

	/* Check if the file is an ELF file */
	if (!isELF(ehdr))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		close(fd);
		exit(98);
	}

	/* Print the ELF header information */
	printELFHeaderInfo(ehdr);

	/* Close the file */
	close(fd);

	return (0);
}
