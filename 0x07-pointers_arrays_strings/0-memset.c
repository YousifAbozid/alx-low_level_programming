#include "main.h"
#include <string.h>

/**
 * _memset - Entry point
 * @s: pointer
 * @b: buffer
 * @n: number of bytes to write
 * Return: buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
