#include "search_algos.h"

/**
 * main - Entry point for testing search algorithms.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);
int value = 6;
int result;

printf("Searching for %d in the array...\n", value);

result = linear_search(array, size, value);
if (result != -1)
{
printf("Found %d at index %d using linear search.\n", value, result);
}
else
{
printf("%d not found in the array using linear search.\n", value);
}

result = binary_search(array, size, value);
if (result != -1)
{
printf("Found %d at index %d using binary search.\n", value, result);
}
else
{
printf("%d not found in the array using binary search.\n", value);
}

return (0);
}
