#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 on success.
 */
int main(void)
{
long int n = 612852475143;
long int i = 2;
long int maxPrime = 1;

while (n > 1)
{
if (n % i == 0)
{
while (n % i == 0)
{
n /= i;
}
maxPrime = i;
}
i++;
}

printf("%lld\n", maxPrime);

return (0);
}
