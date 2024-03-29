#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: The hash table to search in
 * @key: The key to look up
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
HashNode *current;

if (ht == NULL || key == NULL || strlen(key) == 0)
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
return (current->value);
}

current = current->next;
}

return (NULL);
}
