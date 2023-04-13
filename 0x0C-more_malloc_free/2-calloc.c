#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Entry point
 * @nmemb: int
 * @size: int
 * Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = calloc(nmemb, size);

if (ptr == NULL)
return (NULL);

return (ptr);
}
