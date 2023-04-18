#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a struct dog variable with the provided values.
 *
 * @d: Pointer to a struct dog variable that needs to be initialized.
 * @name: Pointer to a character array that stores the name of the dog.
 * @age: Floating-point number that represents the age of the dog.
 * @owner: Pointer to a character array that stores the owner of the dog.
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}

