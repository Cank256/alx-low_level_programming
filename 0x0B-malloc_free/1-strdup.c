#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated
 *           space in memory, which contains a copy of the string
 *           given as a parameter
 * @str: Pointer to string
 *
 * Return: Pointer to duplicated string or NULL if it fails
 */
char *_strdup(char *str)
{
size_t len = strlen(str) + 1;
char *dup_str = malloc(len * sizeof(char));

if (str == NULL)
{
return (NULL);
}

if (dup_str == NULL)
{
return (NULL);
}

memcpy(dup_str, str, len);

return (dup_str);
}
