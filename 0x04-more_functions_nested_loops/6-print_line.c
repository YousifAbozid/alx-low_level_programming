#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_line - Entry point
 * @n: character to classify.
 *
 */

void print_line(int n)
{
if (n <= 0)
_putchar('\n');

while (n--)
_putchar('_');

}
