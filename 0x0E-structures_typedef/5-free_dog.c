#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog to be freed
 *
 * Description: This function frees the memory allocated for a dog. It takes a
 * pointer to a `dog_t` structure and releases the memory allocated for its
 * `name` and `owner` fields, as well as the memory allocated for the dog
 * structure itself.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}

free(d->name);
free(d->owner);
free(d);
}
