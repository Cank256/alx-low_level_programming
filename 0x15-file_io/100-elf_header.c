#include "main.h"

/**
 * print_error - Prints an error message
 * to stderr and exits with the provided code.
 * @code: The exit code.
 * @message: The error message.
 */
void print_error(int code, const char *message)
{
fprintf(stderr, "%s\n", message);
exit(code);
}

/**
 * print_elf_header - Prints the information contained in the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:%s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ?
"ELF32" : "ELF64");
printf("  Data:%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" : "2's complement, big endian");
printf("  Version:%d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:%s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
"UNIX - System V" : "Others");
printf("  ABI Version:%d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:%s\n", header->e_type == ET_EXEC ?
"EXEC (Executable file)" : "Others");
printf("  Entry point address:0x%lx\n", header->e_entry);
}

/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or the corresponding error code.
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
print_error(98, "Usage: elf_header elf_filename");
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
print_error(98, "Error: Cannot open file");
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
print_error(98, "Error: Cannot read ELF header");
}

if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
print_error(98, "Error: Not an ELF file");
}

lseek(fd, 0, SEEK_SET);
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
print_error(98, "Error: Cannot read ELF header");
}

print_elf_header(&header);

close(fd);
return (0);
}
