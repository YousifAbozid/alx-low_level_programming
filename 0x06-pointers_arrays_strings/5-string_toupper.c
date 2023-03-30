#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - Entry point
 * @s: string
 * Return: string
*/

char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (islower(s[i]))
{
s[i] = toupper(s[i]);
}
i++;
}
return (s);
}
