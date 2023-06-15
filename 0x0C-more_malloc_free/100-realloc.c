#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry point
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}

if (new_size == old_size)
return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}
}
else
{
for (i = 0; i < new_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}
}

free(ptr);
return (new_ptr);
}
