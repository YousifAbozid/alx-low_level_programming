#include "main.h"
#include <string.h>

/**
 * *_strncpy - Entry point
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: length of source
 * Return: String
*/

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
