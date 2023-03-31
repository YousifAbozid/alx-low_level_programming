#include "main.h"

/**
 * *rot13 - Entry point
 * @s: string
 * Return: string
*/

char *rot13(char *s)
{
char *result = s;
int i;

for (i = 0; s[i] != '\0'; i++)
{
char c = s[i];
if (c >= 'a' && c <= 'z')
{
c = (c - 'a' + 13) % 26 + 'a';
}
else if (c >= 'A' && c <= 'Z')
{
c = (c - 'A' + 13) % 26 + 'A';
}
result[i] = c;
}
return (result);
}
