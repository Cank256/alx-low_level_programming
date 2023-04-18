#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Function that prints a struct dog
 *
 * @d - Pointer to struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("");
}

printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
}
