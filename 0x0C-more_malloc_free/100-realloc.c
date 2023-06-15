#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr:  Pointer
 * @old_size: Old size
 * @new_size: New size
 *
 * Return: new_ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == old_size)
{
return (ptr);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
{
return (NULL);
}

if (new_size > old_size)
{
new_size = old_size;
}

for (i = 0; i < new_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}

free(ptr);

return (new_ptr);
}
