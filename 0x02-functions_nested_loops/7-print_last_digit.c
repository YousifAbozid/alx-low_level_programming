#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - Entry point
 * @n: character to classify.
 * Return: success
 *
 */

int print_last_digit(int n)
{
int i;
if (n < 0)
i = -1 * (n % 10);
else
i = n % 10;

_putchar(i + '0');
return (i);
}
