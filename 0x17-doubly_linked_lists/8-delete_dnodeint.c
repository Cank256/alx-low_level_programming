#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: the index of the node that should be deleted, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *next_node;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}
current = *head;
if (index == 0)
{
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(current);
return (1);
}

for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}

if (current == NULL)
{
return (-1);
}

next_node = current->next;
if (current->prev != NULL)
{
current->prev->next = next_node;
}
if (next_node != NULL)
{
next_node->prev = current->prev;
}
free(current);
return (1);
}
