#include "main.h"
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(tolower(i));
}

_putchar('\n');
return (0);
}
