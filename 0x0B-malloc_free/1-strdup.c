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
size_t len;
char *dup;

if (str == NULL)
return (NULL);

len = strlen(str);
dup = malloc(len + 1);

if (dup == NULL)
return (NULL);

strcpy(dup, str);

return (dup);
}
