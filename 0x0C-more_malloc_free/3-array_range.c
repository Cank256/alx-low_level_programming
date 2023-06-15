#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to new array and NULL if fails
 */
int *array_range(int min, int max)
{
int *arr, size, i;

if (min > max)
{
return (NULL);
}

size = max - min + 1;
arr = malloc(sizeof(int) + size);
if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = min++;
}

return (arr);
}
