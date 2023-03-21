#include "main.h"
#include <ctype.h>

/**
 * print_alphabet_x10 - Entry point
 *
 */
void print_alphabet_x10(void)
{
int i;
int j;

for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(tolower(i));
}
_putchar('\n');
}
}
