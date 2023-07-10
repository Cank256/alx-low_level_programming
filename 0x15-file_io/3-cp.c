#include "main.h"

/**
 * error_exit - Prints an error message and exits with the provided code.
 * @code: The exit code.
 * @message: The error message.
 */
void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or the corresponding error code.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

if (argc != 3)
{
error_exit(97, "Usage: cp file_from file_to");
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
error_exit(98, "Error: Can't read from file");
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
if (fd_to == -1)
{
error_exit(99, "Error: Can't write to file");
}
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
error_exit(99, "Error: Can't write to file");
}
}
if (bytes_read == -1)
{
error_exit(98, "Error: Can't read from file");
}
if (close(fd_from) == -1)
{
error_exit(100, "Error: Can't close file descriptor");
}
if (close(fd_to) == -1)
{
error_exit(100, "Error: Can't close file descriptor");
}
return (0);
}
