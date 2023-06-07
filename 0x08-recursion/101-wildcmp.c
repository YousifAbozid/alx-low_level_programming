#include "main.h"

/**
 * wildcmp - Function to check if two strings are equal
 * @s1: The string to check
 * @s2: The string to check
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* Base case: if both strings are empty, they are identical */
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);

if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));

return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

/* If none of the above cases apply, the strings are not identical */
return (0);
}
