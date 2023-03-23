#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 */
void print_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
/*number 0 has ASCII value of 48*/
putchar('0' + n);
}
putchar('\n');
}
