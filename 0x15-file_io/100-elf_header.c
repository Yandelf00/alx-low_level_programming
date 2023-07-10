#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * closefile - Close the file.
 * @fil: ELF.
 * Return: void.
 */
void closefile(int fil)
{
	if (close(fil) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fil);
		exit(98);
	}
}
/**
 * Cfilele - Checks if file == ELF.
 * @rem: Remaining content.
 * Return: void.
 */
void Cfilele(unsigned char *rem)
{
	int i;

	for (i = 0; i < 4; i++)
		if (rem[i] != 127 && rem[i] != 'E' &&
		    rem[i] != 'L' && rem[i] != 'F')
			dprintf(STDERR_FILENO, "Error: Not ELF file\n"),
				exit(98);
}
/**
 * Prntmgic - Prints mgc of ELF.
 * @magic: ELF numbers.
 * Return: void.
 */
void Prntmgic(unsigned char *magic)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", magic[i]);
		i == EI_NIDENT - 1 ? printf("\n") : printf(" ");
	}
}
/**
 * Prntclss - Print the ELF class.
 * @class: ELF file.
 * Return: void.
 */
void Prntclss(unsigned char *class)
{
	printf("  Class:                             ");
	switch (class[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", class[EI_CLASS]);
	}
}
/**
 * Prntdta - Prints the ELF data file.
 * @data: ELF file.
 * Return: void.
 */
void Prntdta(unsigned char *data)
{
	printf("  Data:                              ");

	switch (data[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", data[EI_CLASS]);
	}
}
/**
 * Prnvrsion - Prints the ELF version file.
 * @version: ELF file.
 * Return: void.
 */
void Prnvrsion(unsigned char *version)
{
	printf("  Version:                           %d",
	       version[EI_VERSION]);

	switch (version[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * prosabi - Prints the ELF OS/ABI file.
 * @o_a: ELF file.
 * Return: void.
 */
void prosabi(unsigned char *o_a)
{
	printf("  OS/ABI:                            ");

	switch (o_a[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", o_a[EI_OSABI]);
	}
}
/**
 * abii - Prints the ELF ABI version file.
 * @abi: ELF file.
 * Return: void.
 */
void abii(unsigned char *abi)
{
	printf("  ABI Version:                       %d\n",
	       abi[EI_ABIVERSION]);
}
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