#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: The size of the hash table (number of buckets)
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occurs.
 *
 * Description: This function creates a new hash table with a specified size.
 * It allocates memory for the hash table structure and the array of buckets.
 * Each bucket is initialized to NULL, and the size is set to the given size.
 * If any memory allocation fails or if the size is less than or equal to 0,
 * it returns NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

if (size <= 0)
{
return (NULL);
}

if (new_table == NULL)
{
return (NULL);
}

new_table->size = size;
new_table->array = (HashNode **)malloc(sizeof(HashNode *) * size);

if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

for (i = 0; i < size; i++)
{
new_table->array[i] = NULL;
}

return (new_table);
}
