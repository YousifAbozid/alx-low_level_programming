#include "main.h"
/**
 *print_square - prints a line n chars long.
 *@size: number of \.
 *
 */
void print_square(int size)
{
int i, square;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (square = 0; square < size; square++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
