#include "file.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * type - Prints the ELF type file.
 * @type: the ELF type.
 * @class: the ELF Class
 * Return: void.
 */
void type(unsigned int type, unsigned char *class)
{
	if (class[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}
}
/**
 * entry - Prints the ELF entry.
 * @entry: the ELF type.
 * @class: the ELF Class
 * Return: void.
 */
void entry(unsigned long int entry, unsigned char *class)
{
	printf("  Entry point address:               ");

	if (class[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (class[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}
/**
 * main - Displays the infos contained in ELF header at the
 *        start of the ELF file.
 * @ac: the Number of arguments passed.
 * @av: the Array of arguments passed.
 * Return: 0 if success.
 */
int main(int ac, char **av)
{
	Elf64_Ehdr *header;
	int openn, readd;

	if (ac != 2 || av[1] == NULL)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n",
			av[0]), exit(98);
	openn = open(av[1], O_RDONLY);
	if (openn == -1)
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n",
			av[1]), exit(98);
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Error: No memory allocated for %s\n",
			av[1]);
		closefile(openn), exit(98);
	}
	readd = read(openn, header, sizeof(Elf64_Ehdr));
	if (readd == -1)
	{
		printf("Error: Cannot read file %s\n", av[1]);
		free(header), closefile(openn), exit(98);
	}
	Cfilele(header->e_ident);
	Prntmgic(header->e_ident);
	Prntclss(header->e_ident);
	Prntdta(header->e_ident);
	Prnvrsion(header->e_ident);
	prosabi(header->e_ident);
	abii(header->e_ident);
	type(header->e_type, header->e_ident);
	entry(header->e_entry, header->e_ident);

	free(header);
	closefile(openn);
	return (0);
}
