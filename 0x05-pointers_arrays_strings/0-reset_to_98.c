#include "main.h"

/**
 * reset_to_98 - Entry point.
 *
 * @n: pointer
 *
*/

void reset_to_98(int *n)
{
int *p;
p = *n;
*p = 98;
_putchar(p);
}
