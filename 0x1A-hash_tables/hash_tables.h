#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>

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
 */
typedef struct HashTable {
    unsigned long int size;
    HashNode **array;
} HashTable;

/* Function prototypes */
HashTable *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
