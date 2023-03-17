#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char l;
for (n = 0; n < 10; n++)
/*number 0 has ASCII value of 48*/
putchar('0' + n);

for (l = 'a'; l <= 'f'; l++)
putchar(l);

putchar('\n');
return (0);
}
