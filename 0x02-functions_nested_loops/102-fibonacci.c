#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * @void: void
 * Return: 0 Success
 */
int main(void)
{
int i, n = 50, t1 = 1, t2 = 2, nextTerm;

printf("%d, %d, ", t1, t2);

for (i = 3; i <= n; i++)
{
nextTerm = t1 + t2;
printf("%d", nextTerm);

if (i != n)
printf(", ");

t1 = t2;
t2 = nextTerm;
}

printf("\n");

return (0);
}
