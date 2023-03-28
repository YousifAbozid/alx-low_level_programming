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
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
