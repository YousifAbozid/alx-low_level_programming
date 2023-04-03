#include "main.h"
#include <string.h>

/**
 * _memcpy - Entry point
 * @dest: destination
 * @src: source
 * @n: number of bytes to write
 * Return: pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
