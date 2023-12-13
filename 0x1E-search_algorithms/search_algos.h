#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


/**
 * struct skiplist_s - Skip list node
 *
 * @n: Integer stored in the node
 * @index: Index of the node in the list
 * @express: Pointer to the next express lane node
 * @next: Pointer to the next node in the same lane
 */
typedef struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *express;
struct skiplist_s *next;
} skiplist_t;

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_exp(int *array, size_t start, size_t end, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t start, size_t end, int value);
skiplist_t *jump_list(skiplist_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
void print_array(int *array, size_t start, size_t end);
size_t min(size_t a, size_t b);

#endif /* SEARCH_ALGOS_H */
