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
_putchar(n % 10 + '0');
return (n);
}
