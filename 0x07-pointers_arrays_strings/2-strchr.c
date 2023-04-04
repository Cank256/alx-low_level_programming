#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s - String
 * @c - Character to be located
 *
 * Return: Pointer to the first occurence of the character or NULL if not found
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}

return (NULL);
}
