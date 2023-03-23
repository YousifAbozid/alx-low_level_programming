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
int space;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n--)
{
for (space = 0; space < n; space++)
{
_putchar(' ');
}
_putchar("\\");
_putchar('\n');
}
}
