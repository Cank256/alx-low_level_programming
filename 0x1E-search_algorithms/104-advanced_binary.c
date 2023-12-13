#include "search_algos.h"

/**
 * advanced_binary - Search for the first occurrence
 * of a value in a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of the value if found, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL)
{
return (-1);
}

return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary.
 * @array: Pointer to the first element of the array.
 * @start: Starting index of the subarray.
 * @end: Ending index of the subarray.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of the value if found, otherwise -1.
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
size_t mid;

if (start > end)
{
return (-1);
}

print_array(array, start, end);

mid = start + (end - start) / 2;

if (array[mid] == value)
{
if (mid == start || array[mid - 1] != value)
{
return (mid);
}
return (advanced_binary_recursive(array, start, mid, value));
}
else if (array[mid] < value)
{
return (advanced_binary_recursive(array, mid + 1, end, value));
}
else
{
return (advanced_binary_recursive(array, start, mid - 1, value));
}
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
