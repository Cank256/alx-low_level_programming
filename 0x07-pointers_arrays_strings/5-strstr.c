#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;

if (*needle == '\0')
{
return haystack;
}

for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
k = i;
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[k] == needle[j])
{
k++;
} else
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
}

return (NULL);
}
