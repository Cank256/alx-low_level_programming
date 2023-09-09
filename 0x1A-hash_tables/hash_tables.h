#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 1000  // You can adjust the table size as needed

/**
 * struct HashNode - Node structure for the hash table
 * @key: The key (string) associated with the node
 * @value: The value (string) associated with the key
 * @next: A pointer to the next node in case of a collision (linked list)
 */
typedef struct HashNode {
    char *key;
    char *value;
    struct HashNode *next;
} HashNode;

/**
 * struct HashTable - Hash table structure
 * @size: The size of the hash table (number of buckets)
 * @array: An array of pointers to HashNode structures (buckets)
 *
 * Description: The HashTable structure represents a hash table that
 * stores key-value pairs using separate chaining for collision handling.
 * The size determines the number of buckets in the hash table.
 */
typedef struct HashTable {
    unsigned long int size;
    HashNode **array;
} HashTable;

hash_table_t *hash_table_create(unsigned long int size);

#endif
