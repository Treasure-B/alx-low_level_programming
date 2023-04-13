#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *create_buffer(void);
void close_file(int fd);
void print_error(const char *error_message);

/**
* create_buffer - Allocates BUFFER_SIZE bytes for a buffer.
* Return: A pointer to the newly-allocated buffer.
*/
char *create_buffer(void)
{
char *buffer;

buffer = malloc(sizeof(char) * BUFFER_SIZE);
if (buffer == NULL)
{
print_error("Can't allocate memory for buffer");
}
return (buffer);
}

/**
* close_file - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/

void close_file(int fd)
{
if (close(fd) == -1)
{
print_error("Can't close file descriptor");
}
}

/**
* print_error - Prints the given error message to stderr and exits with
* the corresponding error code.
* @error_message: The error message to print.
*/

void print_error(const char *error_message)
{
dprintf(STDERR_FILENO, "Error: %s\n", error_message);
exit(EXIT_FAILURE);
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
*              If file_from does not exist or cannot be read - exit code 98.
*              If file_to cannot be created or written to - exit code 99.
*              If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to;
char buf[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
int close_from, close_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

fd_from = open(argv[1], O_RDONLY);

if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

while ((bytes_read = read(fd_from, &buf, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buf, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

close_from = close(fd_from);
close_to = close(fd_to);

if (close_from == -1 || close_to == -1)
{
if (close_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
}
if (close_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
}
exit(100);
}

return (0);
}

