#include "main.h"

/**
 * more_numbers - Entry point
 *
 */
void more_numbers(void)
{
int i, j, tens, units;

for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
tens = i / 10;
units = i % 10;
if (i > 9)
_putchar(tens + '0');

_putchar(units + '0');
}
_putchar('\n');
}
}
