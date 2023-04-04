#include "main.h"
#include <string.h>

/**
 * _strstr - Entry point
 * @haystack: pointer
 * @needle: accept
 * Return: char
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n == *h && *n != '\0')
{
n++;
h++;
}

if (*n == '\0')
{
return (haystack);
}
}
return (NULL);
}
