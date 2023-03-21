#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 * @c: character to classify.
 * Return: 1 if c is lowercase or otherwise 0.
 *
 */

int _isalpha(int c)
{
if (isalpha(c)) { // check if c is a letter, lowercase or uppercase
return 1; // c is alphabetic
}
return 0; // c is not alphabetic
}
