#include "main.h"
#include <string.h>

/**
 * *_strncat - Entry point
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: length of source
 * Return: String
*/

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
