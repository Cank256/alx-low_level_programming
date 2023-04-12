#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Pointer to a newly allocated space in memory containing the
 * concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
size_t s1_len = strlen(s1);
size_t s2_len = strlen(s2);
char *result = (char *)malloc(s1_len + s2_len + 1);

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (result == NULL)
{
return (NULL);
}

strcpy(result, s1);
strcpy(result + s1_len, s2);
return (result);
}
