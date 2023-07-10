#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file = fopen(filename, "r");
char *buffer = malloc((letters + 1) * sizeof(char));
ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
if (filename == NULL)
{
return (0);
}

if (file == NULL)
{
return (0);
}

if (buffer == NULL)
{
fclose(file);
return (0);
}

if (bytesRead <= 0)
{
free(buffer);
fclose(file);
return (0);
}

buffer[bytesRead] = '\0';

if (bytesWritten != bytesRead)
{
free(buffer);
fclose(file);
return (0);
}

free(buffer);
fclose(file);

return (bytesRead);
}
