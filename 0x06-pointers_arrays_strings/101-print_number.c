#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_number - Entry point
 * @n: number
 *
*/

void print_number(int n)
{
int divisor = 1;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n / divisor >= 10)
{
divisor *= 10;
}
while (divisor > 0)
{
_putchar((n / divisor) +'0');
n %= divisor;
divisor /= 10;
}
}
