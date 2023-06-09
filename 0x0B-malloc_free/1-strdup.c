#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: Pointer to the string to be duplicated.
 *
 * Return: Pointer to a newly allocated space in memory containing the
 * duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
size_t i;
size_t len;
char *duplicate;

if (str == NULL)
{
return (NULL);
}

len = strlen(str);
duplicate = (char *)malloc(len + 1);
if (duplicate == NULL)
{
return (NULL);
}

for (i = 0; i <= len; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
