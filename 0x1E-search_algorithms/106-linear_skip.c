#include "search_algos.h"

/**
 * linear_skip - Search for a value in a sorted skip list.
 * @list: Pointer to the head of the skip list.
 * @value: Value to search for.
 *
 * Return: Node containing the value if found, otherwise NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *current, *express;

if (list == NULL)
{
return (NULL);
}
current = list;
while (current != NULL)
{
express = current->express;

printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

if (express == NULL || express->n >= value)
{
if (express != NULL)
{
printf(
"Value found between indexes [%lu] and [%lu]\n", current->index, express->index
);
}
else
{
printf(
"Value found between indexes [%lu] and [%lu]\n", current->index, current->index
);
}
while (current != NULL)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
if (current->n == value)
{
return (current);
}
current = current->next;
}
}
current = express;
}
return (NULL);
}
