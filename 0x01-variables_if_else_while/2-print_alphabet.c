#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
/* jumps from 'A'(65) to 'B'(66) to ... in order. */
for (x = 'A'; x <= 'Z'; x++)
{
char small = tolower(x);
putchar(small);
}
return (0);
}
