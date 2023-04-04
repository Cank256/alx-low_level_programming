#include "main.h"
#include <stdio.h>

/**
 * _memcpy - occupies memory
 * @dest: Pointer to memory area to be filled
 * @src: Pointer of memory to copy from
 * @n: Number of bytes of source memory area
 *
 * Return: Pointer to destinaion memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
