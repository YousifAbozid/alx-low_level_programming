#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *leet - Entry point
 * @s: string
 * Return: string
*/

char *leet(char *s)
{
char *c;
int i, j;
char from[] = "aeotlAEOTL";
char to[] = "43071";

for (i = 0; s[i]; i++)
{
for (j = 0; from[j]; j++)
{
if (s[i] == from[j])
{
s[i] = to[j];
break;
}
}
}
return (s);
}
