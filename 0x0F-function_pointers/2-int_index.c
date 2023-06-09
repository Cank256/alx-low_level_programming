#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search in
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: index of first element for which cmp doesn't
 * return 0, or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}
