#include <math.h>
#include "main.h"

/**
 * find_sqrt - Entry point.
 * @n: number.
 * @i: number.
 * Return: number.
*/
int find_sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Entry point.
 * @n: number.
 * Return: number.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (find_sqrt(n, 1));
}

/**
 * is_prime_number - Entry point.
 * @n: number.
 * Return: number.
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);

int max_divisor = _sqrt_recursion(n);
int i;
for (i = 2; i <= max_divisor; i++)
{
if (n % i == 0)
return (0);
}

return (1);
}
