#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using
 *             the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if the value is not present or if the head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump, prev;

if (list == NULL || size == 0)
{
return (NULL);
}

jump = sqrt(size);
prev = 0;

while (list && list->n < value)
{
printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);

prev = list->index;
while (list->next && list->index < jump)
{
list = list->next;
}

jump += sqrt(size);
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, list->index);

while (prev < size && prev <= list->index)
{
printf("Value checked at index [%lu] = [%d]\n", prev, list->n);
if (list->n == value)
{
return (list);
}

prev++;
list = list->next;
}

return (NULL);
}
