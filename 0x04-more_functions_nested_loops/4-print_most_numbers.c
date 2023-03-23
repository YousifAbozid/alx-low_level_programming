#include <stdio.h>

/**
 * print_most_numbers - Entry point
 *
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
if (n != 2 && n != 4)
{
putchar('0' + n);
}
}
putchar('\n');
}
