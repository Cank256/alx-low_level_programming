#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the *s with const b
 *
 * *s: character pointer
 * b: character
 * n: integer number of bytes
 *
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return s;
}
