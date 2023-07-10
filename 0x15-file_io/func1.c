#include "file.h"
#include <sys/types.h>
#include <sys/stat.h>
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
