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
int start = len / 2;
int i;

if (len % 2 == 1)
start = (len - 1) / 2;

for (i = start; i < len; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
