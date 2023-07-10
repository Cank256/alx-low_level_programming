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
int fileDescriptor = open(filename, O_WRONLY | O_APPEND);
int textLength = 0;
ssize_t bytesWritten = write(fileDescriptor, text_content, textLength);
if (filename == NULL)
{
return (-1);
}

if (fileDescriptor == -1)
{
return (-1);
}

if (text_content != NULL)
{

while (text_content[textLength] != '\0')
{
textLength++;
}

if (bytesWritten == -1)
{
close(fileDescriptor);
return (-1);
}
}

close(fileDescriptor);
return (1);
}
