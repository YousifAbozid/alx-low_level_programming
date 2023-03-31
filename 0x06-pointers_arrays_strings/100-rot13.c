#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *rot13 - Entry point
 * @s: string
 * Return: string
*/

char *rot13(char *s)
{
int i;
int len = strlen(s);
char *result = (char *)malloc(len + 1);

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
/* Rotate lowercase letters by 13 positions */
result[i] = ((s[i] - 'a') + 13) % 26 + 'a';
}
else if (s[i] >= 'A' && s[i] <= 'Z')
{
/* Rotate uppercase letters by 13 positions */
result[i] = ((s[i] - 'A') + 13) % 26 + 'A';
}
else
{
/* Copy non-letter characters as is */
result[i] = s[i];
}
}
/* Add null terminator to the result string */
result[i] = '\0';

return (result);
}
