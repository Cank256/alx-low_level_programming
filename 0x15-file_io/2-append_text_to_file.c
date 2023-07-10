#include "main.h"

/**
 * append_text_to_file - Appends text_content at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}

int fileDescriptor = open(filename, O_WRONLY | O_APPEND);
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
