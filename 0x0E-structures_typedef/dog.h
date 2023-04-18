#ifndef HEADER_FILE_NAME_H
#define HEADER_FILE_NAME_H

/**
 * struct dog - dog details structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * description: none
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - type for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* HEADER_FILE_NAME_H */
