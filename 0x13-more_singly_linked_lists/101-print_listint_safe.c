#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
const listint_t *addresses[1024];
size_t count = 0;

while (current)
{
size_t i;

for (i = 0; i < count; i++)
{
if (current == addresses[i])
{
printf("-> [%p] %d\n", (void *)current, current->n);
exit(98);
}
}

printf("[%p] %d\n", (void *)current, current->n);
addresses[count++] = current;

current = current->next;
}

return (count);
}

