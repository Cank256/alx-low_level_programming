#include "search_algos.h"

/**
 * jump_search - Search for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump, prev;

if (array == NULL || size == 0)
{
return (-1);
}

jump = sqrt(size);
prev = 0;

while (array[min(jump, size) - 1] < value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
prev = jump;
jump += sqrt(size);
if (prev >= size)
{
return (-1);
}
}

for (; prev < min(jump, size); prev++)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
{
return (prev);
}
}

return (-1);
}
