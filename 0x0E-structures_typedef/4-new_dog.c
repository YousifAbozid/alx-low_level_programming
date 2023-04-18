#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
int name_len, owner_len;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

name_len = _strlen(name);
new_name = malloc(sizeof(char) * (name_len + 1));
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}

owner_len = _strlen(owner);
new_owner = malloc(sizeof(char) * (owner_len + 1));
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}

_strcpy(new_name, name);
_strcpy(new_owner, owner);

new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;

return (new_dog);
}
