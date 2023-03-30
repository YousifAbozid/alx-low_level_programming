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
const char *delimiters = " \t\n,;.!?\"(){}";
int len = strlen(s);
int i;
int cap_next = 1;

for (i = 0; i < len; i++)
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
