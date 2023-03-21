#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_sign - Entry point
 * @n: character to classify.
 * Return: success
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
