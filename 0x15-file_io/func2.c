#include "file.h"
#include <sys/types.h>
#include <sys/stat.h>
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
