#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - entry point
 * @str: string
 * Return: pointer
*/
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);

char *dup;

dup = strdup(str);
if (dup == NULL)
return (NULL);

return (dup);
}
