#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a
 * sorted array using interpolation search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0, high = size - 1, pos;

if (array == NULL)
{
return (-1);
}

while (low <= high && value >= array[low] && value <= array[high])
{
if (low == high)
{
if (array[low] == value)
{
return (low);
}
return (-1);
}

pos = low + (
((double)(high - low) / (array[high] - array[low])) * (value - array[low])
);

printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
{
return (pos);
}

if (array[pos] < value)
{
low = pos + 1;
}
else
{
high = pos - 1;
}
}

return (-1);
}
