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

size = max - min + 1;
arr = malloc(sizeof(int) + size);

if (min > max)
{
return (NULL);
}

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i <size; i++)
{
arr[i] = min + 1;
}

return (arr);
}
