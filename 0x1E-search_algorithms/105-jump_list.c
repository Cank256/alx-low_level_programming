#include "search_algos.h"

/**
 * jump_list - Search for a value in a sorted
 * singly linked list using jump search.
 * @list: Pointer to the head of the linked list.
 * @size: Number of nodes in the linked list.
 * @value: Value to search for.
 *
 * Return: Node containing the value if found, otherwise NULL.
 */
skiplist_t *jump_list(skiplist_t *list, size_t size, int value)
{
size_t jump, prev;
listint_t *current;

if (list == NULL || size == 0)
{
return (NULL);
}

jump = sqrt(size);
prev = 0;
current = list;

while (current->index < jump && current->n < value)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
prev = current->index;
while (current->next != NULL && current->next->index < jump)
{
current = current->next;
}
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

while (current->index < size && current->n < value)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
if (current->n == value)
{
return (current);
}
current = current->next;
}

return (NULL);
}
