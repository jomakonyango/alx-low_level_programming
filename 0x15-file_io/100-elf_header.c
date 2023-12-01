#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"

/**
* check_elf_file - checks if the file is an ELF file
* @ehdr: the ELF header
* @fd: the file descriptor
* Return: 0 if it's an ELF file, 98 otherwise
*/
int check_elf_file(Elf64_Ehdr ehdr, int fd)
{
if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(2, "Error: Not an ELF file\n");
close(fd);
return (98);
}
return (0);
}

/**
* print_elf_header - prints the ELF header information
* @ehdr: the ELF header
*/
void print_elf_header(Elf64_Ehdr ehdr)
{
int i;

printf("Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", ehdr.e_ident[i]);
printf("\n");
/* More printf statements to print the rest of the ELF header */
}

/**
* main - displays the information contained in the
* ELF header at the start of an ELF file
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr ehdr;

if (argc != 2)
{
dprintf(2, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
return (98);
}

if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
{
dprintf(2, "Error: Not an ELF file\n");
close(fd);
return (98);
}

if (check_elf_file(ehdr, fd) == 98)
return (98);

print_elf_header(ehdr);

close(fd);

return (0);
}

