#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
/*number '0' has ASCII value of 48*/
putchar('0' + n);
if (('0' + n) != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
