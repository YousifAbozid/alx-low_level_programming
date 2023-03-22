#include "main.h"
#include <stdio.h>

/**
 * numbers_above_98 - Prints numbers to 98
 * @n: character to classify.
 *
 * Description: Print numbers above 98
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
