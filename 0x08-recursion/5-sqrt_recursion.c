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
