#include "search_algos.h"

/**
 * exponential_search - Search for a value in a
 * sorted array using exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1, prev = 0;

if (array == NULL || size == 0)
{
return (-1);
}

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
prev = bound;
bound *= 2;
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, bound);

return (binary_search_exp(array, prev, min(bound, size), value));
}

/**
 * binary_search_exp - Perform binary search on a subarray.
 * @array: Pointer to the first element of the subarray.
 * @start: Starting index of the subarray.
 * @end: Ending index of the subarray.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search_exp(int *array, size_t start, size_t end, int value)
{
size_t left = start, right = end - 1, mid;

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
