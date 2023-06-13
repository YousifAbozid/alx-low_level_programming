#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 * @size: size of the array
 * @c: char
 * Return: array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
return (NULL);

arr = malloc(size * sizeof(char));

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
