#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a limit on second string
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = strlen(s1);
unsigned int len2 = strlen(s2);
char *result = malloc(len1 + n + 1);

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

if (n >= len2)
{
n = len2;
}

if (result == NULL)
{
return (NULL);
}

strcpy(result, s1);
strncat(result, s2, n);
result[len1 + n] = '\0';

return (result);
}
