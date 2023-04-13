#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry point
 * @n: int
 * @s1: pointer
 * @s2: pointer
 * Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result = NULL;
unsigned int s1_len = 0, s2_len = 0, result_len = 0;

/* If s1 is NULL, treat it as an empty string */
if (s1 == NULL)
s1 = "";

/* If s2 is NULL, treat it as an empty string */
if (s2 == NULL)
s2 = "";

/* Get the length of s1 */
s1_len = strlen(s1);

/* If n is greater or equal to the length of s2, use the entire string s2 */
if (n >= strlen(s2))
s2_len = strlen(s2);
else
s2_len = n;

/* Calculate the length of the result string */
result_len = s1_len + s2_len + 1;

/* Allocate memory for the result string */
result = malloc(sizeof(char) * result_len);

/* If malloc fails, return NULL */
if (result == NULL)
return (NULL);

/* Copy s1 into the result string */
strcpy(result, s1);

/* Append the first n bytes of s2 to the result string */
strncat(result, s2, s2_len);

/* Add null terminator */
result[result_len - 1] = '\0';

return (result);
}
