#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Entry point.
 * @s: string.
 * Return: number.
*/
int is_palindrome(char *s)
{
int len = strlen(s);

if (len <= 1)
return (1);
/* recursive case: check if first and last characters match */
else if (s[0] == s[len - 1])
{
/* create a substring that excludes the first and last characters */
char *sub_str = s + 1;
sub_str[len - 2] = '\0';

/* recursive call on the substring */
return (is_palindrome(sub_str));
}
/* not a palindrome */
else
return (0);
}
