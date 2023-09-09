#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in the hash table
 * @ht: The hash table to add or update the key/value pair
 * @key: The key to add or update
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    HashNode *new_node, *current;

    if (ht == NULL || key == NULL || strlen(key) == 0)
        return 0;  // Invalid input

    // Calculate the index using the key_index function
    index = key_index((const unsigned char *)key, ht->size);

    // Check if the key already exists
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            // Key already exists, update the value (duplicate and free old value)
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return 0;  // Memory allocation failed
            return 1;  // Updated successfully
        }
        current = current->next;
    }

    // Key doesn't exist, create a new node and add it at the beginning
    new_node = malloc(sizeof(HashNode));
    if (new_node == NULL)
        return 0;  // Memory allocation failed

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return 0;  // Memory allocation failed
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;  // Added successfully
}
