#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - Entry point
 * @c: character to classify.
 * Return: 1 if c is alpha or otherwise 0.
 *
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}
