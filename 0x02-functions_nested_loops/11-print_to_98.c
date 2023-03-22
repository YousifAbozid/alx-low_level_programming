#include "main.h"
#include <stdio.h>

/**
 * numbers_bove_98 - Prints numbers above 98
 * @n: character to classify.
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're totally free to use several lines to properly
 * describe your function
 */
void numbers_above_98(int n)
{
for (int i = n; i >= 98; i--)
{
if (i < 10)
{
_putchar(i + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}

/**
 * print_to_98 - Prints numbers to 98
 * @n: character to classify.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
if (i < 10)
{
_putchar(i + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
numbers_above_98(n);
}
_putchar('\n');
}
