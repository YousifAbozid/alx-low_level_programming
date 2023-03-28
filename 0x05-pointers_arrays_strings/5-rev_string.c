#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Entry point.
 * @s: pointer
 *
*/

void rev_string(char *s)
{
int len = strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
