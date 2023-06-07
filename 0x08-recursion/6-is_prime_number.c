#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - Entry point.
 * @n: number.
 * @div: number.
 * Return: number.
*/
int is_prime_helper(int n, int div)
{
if (n <= 2)
{
return (n == 2);
}
if (n % div == 0)
{
return (0);
}
if (div * div > n)
{
return (1);
}
return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - Entry point.
 * @n: number.
 * Return: number.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (is_prime_helper(n, 2));
}
