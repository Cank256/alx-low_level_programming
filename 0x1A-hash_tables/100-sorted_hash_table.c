#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = NULL;
unsigned long int i = 0;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
{
return (NULL);
}

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

ht->shead = NULL;
ht->stail = NULL;

for (i = 0; i < size; i++)
{
ht->array[i] = NULL;
}

return (ht);
}

/**
 * shash_table_set - Add or update an element in the sorted hash table
 * @ht: The sorted hash table to add or update the key/value pair
 * @key: The key to add or update
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *current;
if (!ht || !key || strlen(key) == 0)
{
return (0);
}
current = ht->shead;
while (current)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
return (current->value ? 1 : 0);
}
current = current->snext;
}
new_node = malloc(sizeof(shash_node_t));
if (!new_node)
{
return (0);
}
new_node->key = strdup(key);
if (!new_node->key)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (!new_node->value)
{
free(new_node->key);
free(new_node);
return (0);
}
new_node->next = ht->array[key_index((const unsigned char *)key, ht->size)];
ht->array[key_index((const unsigned char *)key, ht->size)] = new_node;
insert_sorted_node(ht, new_node);
return (1);
}

/**
 * shash_table_get - Retrieve a value associated with a key
 * @ht: The sorted hash table to search in
 * @key: The key to look up
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *current = NULL;

if (!ht || !key || strlen(key) == 0)
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];
while (current)
{
if (strcmp(current->key, key) == 0)
{
return (current->value);
}
current = current->next;
}

return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current = NULL;
int flag = 0;

if (!ht)
{
return;
}

printf("{");
current = ht->shead;
while (current)
{
if (flag == 1)
{
printf(", ");
}
printf("'%s': '%s'", current->key, current->value);
flag = 1;
current = current->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current = NULL;
int flag = 0;

if (!ht)
{
return;
}

printf("{");
current = ht->stail;
while (current)
{
if (flag == 1)
{
printf(", ");
}
printf("'%s': '%s'", current->key, current->value);
flag = 1;
current = current->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table and its elements
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *current = NULL, *tmp = NULL;

if (!ht)
{
return;
}

current = ht->shead;
while (current)
{
tmp = current;
current = current->snext;
free(tmp->key);
free(tmp->value);
free(tmp);
}

free(ht->array);
free(ht);
}

/**
 * insert_sorted_node - Insert a node into the sorted linked list
 * @ht: The sorted hash table
 * @new_node: The node to insert
 */
void insert_sorted_node(shash_table_t *ht, shash_node_t *new_node)
{
shash_node_t *current = NULL, *prev = NULL;

if (!ht)
{
return;
}
current = ht->shead;
while (current && strcmp(current->key, new_node->key) < 0)
{
prev = current;
current = current->snext;
}
if (!prev)
{
new_node->snext = current;
new_node->sprev = NULL;
if (current)
{
current->sprev = new_node;
}
else
{
ht->stail = new_node;
}
ht->shead = new_node;
}
else
{
new_node->sprev = prev;
new_node->snext = current;
prev->snext = new_node;
if (current)
{
current->sprev = new_node;
}
else
{
ht->stail = new_node;
}
}
}
