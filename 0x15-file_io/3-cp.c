#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * check_arguments - checks if argument count is correct
 * @argc: argument count
 * @argv: argument vector
 */
void check_arguments(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
}

/**
 * open_files - opens source and destination files
 * @argv: argument vector
 * @fd_from: pointer to source file descriptor
 * @fd_to: pointer to destination file descriptor
 */
void open_files(char *argv[], int *fd_from, int *fd_to)
{
*fd_from = open(argv[1], O_RDONLY);
if (*fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

*fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (*fd_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(*fd_from);
exit(99);
}
}

/**
 * copy_files - copies from source to destination file
 * @argv: argument vector
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void copy_files(char *argv[], int fd_from, int fd_to)
{
ssize_t read_count, write_count;
char buffer[BUFFER_SIZE];

while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
write_count = write(fd_to, buffer, read_count);
if (write_count != read_count)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}

if (read_count == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
exit(98);
}
}

/**
 * close_files - closes source and destination files
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void close_files(int fd_from, int fd_to)
{
if (close(fd_from) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 97, 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;

check_arguments(argc, argv);
open_files(argv, &fd_from, &fd_to);
copy_files(argv, fd_from, fd_to);
close_files(fd_from, fd_to);

return (0);
}
