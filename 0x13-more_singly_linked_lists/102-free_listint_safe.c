#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tmp;

if (!h || !*h)
{
return (0);
}

while (*h)
{
count++;
if (*h <= (*h)->next)
{
free(*h);
*h = NULL;
break;
}
tmp = (*h)->next;
free(*h);
*h = tmp;
}

return (count);
}

