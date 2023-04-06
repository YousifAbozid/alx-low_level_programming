#include <math.h>
#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Entry point.
 * @x: number.
 * @y: number.
 * Return: number.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

return (int) pow(x, y);
}
