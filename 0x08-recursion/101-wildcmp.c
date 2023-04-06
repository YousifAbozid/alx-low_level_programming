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

/* If the current characters match or s2 has a *, move to the next character */
if (*s1 == *s2 || *s2 == '*')
return (wildcmp(s1 + 1, s2 + 1));

/* If s2 has a * and the current characters don't match, */
/* try to match the next */
/* character of s1 with the * in s2 or skip the * in s2 */
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

/* If none of the above cases apply, the strings are not identical */
return (0);
}
