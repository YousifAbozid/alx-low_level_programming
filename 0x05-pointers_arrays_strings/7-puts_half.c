#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Entry point.
 * @str: pointer
 *
*/

void puts_half(char *str)
{
int len = strlen(str);
int n, i;

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}
}

_putchar('\n');
}
