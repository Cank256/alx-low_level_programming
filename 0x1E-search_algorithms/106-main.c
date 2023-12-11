#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
skiplist_t *list, *result;
int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);

list = create_skiplist(array, size);

printf("Original List:\n");
print_skiplist(list);

printf("\nSearching for value 6...\n");
result = linear_skip(list, 6);

if (result)
{
printf("Value found between indexes [%lu] and [%lu]\n",
result->index, result->express->index);
}
else
{
printf("Value not found in the list\n");
}

printf("\nSearching for value 10...\n");
result = linear_skip(list, 10);

if (result)
{
printf("Value found between indexes [%lu] and [%lu]\n",
result->index, result->express->index);
}
else
{
printf("Value not found in the list\n");
}

free_skiplist(list);

return (0);
}
