#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Unsigned integer for size of memory allocation
 *
 * Return: Pointer to allocated memory or  98 if failed
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
