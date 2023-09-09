#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
typedef struct hash_table_t {
    unsigned long int size;
    HashNode **array;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);

#endif /* HASH_TABLES_H */
