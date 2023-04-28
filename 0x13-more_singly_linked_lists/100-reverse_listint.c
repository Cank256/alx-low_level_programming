#include "lists.h"

/**
 * reverse_listint - Reverses a linked list of integers.
 *
 * @head: A pointer to a pointer to the first node in the list.
 *
 * Return: A pointer to the first node in the reversed list.
 *         NULL if head is NULL.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
listint_t *current = NULL;

if (head == NULL || *head == NULL)
{
return (NULL);
}

current = *head;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;

return (*head);
}

