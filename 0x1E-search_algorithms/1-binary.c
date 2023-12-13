#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid;

if (array == NULL)
{
return (-1);
}

while (left <= right)
{
print_array(array, left, right);

mid = left + (right - left) / 2;

if (array[mid] == value)
{
return (mid);
}

if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}

return (-1);
}

/**
 * print_array - Print elements of an array between start and end indices.
 * @array: Pointer to the first element of the array.
 * @start: Index to start printing from.
 * @end: Index to stop printing at.
 */
void print_array(int *array, size_t start, size_t end)
{
size_t i;

printf("Searching in array: ");
for (i = start; i <= end; ++i)
{
printf("%d", array[i]);
if (i < end)
{
printf(", ");
}
}
printf("\n");
}
