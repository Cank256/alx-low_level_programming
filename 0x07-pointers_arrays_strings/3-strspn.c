#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string of bytes to be searched for
 *
 * Return: Number of bytes in the initial segment of s
 *         which consists only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0') {
return (i);
}
}

return (i);
}
