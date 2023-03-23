#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_diagonal - Entry point
 * @n: character to classify.
 *
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n--)
{
_putchar("\\");
}
_putchar('\n');
}
}
