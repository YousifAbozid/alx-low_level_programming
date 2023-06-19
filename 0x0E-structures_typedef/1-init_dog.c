#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable with the given name,
 * age, and owner.
 *
 * @d: A pointer to the struct dog variable to initialize
 * @name: The name of the dog as a string
 * @age: The age of the dog as a floating-point value
 * @owner: The name of the owner of the dog as a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
