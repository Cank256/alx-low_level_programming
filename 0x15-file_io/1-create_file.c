#include "main.h"

/**
 * create_file - Creates a file with the given filename
 * and writes the text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}

int fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fileDescriptor == -1)
{
return (-1);
}

if (text_content != NULL)
{
int textLength = 0;
while (text_content[textLength] != '\0')
{
textLength++;
}

ssize_t bytesWritten = write(fileDescriptor, text_content, textLength);
if (bytesWritten == -1)
{
close(fileDescriptor);
return (-1);
}
}

close(fileDescriptor);
return (1);
}
