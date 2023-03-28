#include "main.h"
#include <stdio.h>

/**
 * puts2 - Entry point.
 * @str: pointer
 *
*/

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; ++i)
{
_putchar(str[i]);
}
_putchar('\n');
}
