#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the linked list
 * @str: string to be stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node = *head;
size_t str_len = 0;

while (str && str[str_len])
{
str_len++;
}

new_node = malloc(sizeof(list_t));
if (!new_node)
{
return (NULL);
}

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->len = str_len;
new_node->next = NULL;

if (!*head)
{
*head = new_node;
return (new_node);
}

while (last_node->next)
{
last_node = last_node->next;
}

last_node->next = new_node;

return (new_node);
}

