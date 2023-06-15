#include "main.h"

/**
 * _calloc - Allocates memory for an array and sets it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr = malloc(nmemb * size);

if (nmemb == 0 || size == 0)
{
return (NULL);
}

if (ptr == NULL)
{
return (NULL);
}

ptr = calloc(nmemb, size);

return (ptr);
}
