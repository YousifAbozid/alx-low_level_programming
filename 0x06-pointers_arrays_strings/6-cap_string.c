#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *cap_string - Entry point
 * @s: string
 * Return: string
*/

char *cap_string(char *s)
{
char delimiters = " \t\n,;.!?\"(){}";
size_t len = strlen(s);
int cap_next = 1;

for (size_t i = 0; i < len; i++)
{
if (cap_next && islower(s[i]))
{
s[i] = toupper(s[i]);
}

cap_next = 0;

if (strchr(delimiters, s[i]) != NULL)
{
cap_next = 1;
}
}
return (s);
}
