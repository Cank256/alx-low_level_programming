#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog
 *
 * Description: This function creates a new dog with the given name, age, and
 * owner. It allocates memory for the dog struct and copies the given values
 * into the newly created struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = (dog_t *)malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}

new_dog->name = (char *)malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);

new_dog->age = age;

new_dog->owner = (char *)malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);

return (new_dog);
}
