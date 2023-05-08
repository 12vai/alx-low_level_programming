#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define MAX_BUFFER 1024

/**
 * Prints an error message to stderr and exits the program with status code 98.
 * @param msg The error message to print.
 */

void print_error(char *msg)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(98);
}

/**
 * Prints the ELF header information to stdout.
 * @param header The ELF header to print.
 */

void print_header(Elf64_Ehdr header)
{
int i;

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header.e_ident[i]);
printf("\n");

printf("  Class:                             ");
switch (header.e_ident[EI_CLASS])
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
printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
break;
}

printf("  Data:                              ");
switch (header.e_ident[EI_DATA])
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
printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
break;
}

printf("  Version:                           %d\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header.e_ident[EI_OSABI])
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
case ELFOSABI_AIX:
printf("UNIX - AIX\n");
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
case ELFOSABI_MODESTO:
printf("Novell - Modesto\n");
break;
case ELFOSABI_OPENBSD:
printf("UNIX - OpenBSD\n");
break;
default:
printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
break;
}

printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

printf("  Type:                              ");
switch (header.e_type)
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
case ET_CORE
}
