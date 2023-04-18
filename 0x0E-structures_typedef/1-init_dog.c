#include "dog.h"
/**
 * init_dog - unction that initialize a variable of type struct dog
 *
 * @d: Pointer to the struct dog
 * @name: Name variable in struct dog
 * @age: Age variable in struct dog
 * @owner: Owner variable of struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
