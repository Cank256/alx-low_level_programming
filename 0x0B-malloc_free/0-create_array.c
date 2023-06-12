#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars,
 *                and initializes it with a specific char
 * @size: Unsigned size of character array
 * @c: Specific character to be initialized
 *
 * Return: NULL when size is 0 or  pointer to array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(sizeof(char) * size);

if (size == 0)
{
return (NULL);
}

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
