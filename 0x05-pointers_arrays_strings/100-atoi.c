#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _atoi - Entry point.
 * @s: pointer
 * Return: integer value
*/

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign = -1;
i++;
continue;
}
else if (s[i] == '+')
{
sign = 1;
i++;
continue;
}

if (s[i] < '0' || s[i] > '9')
{
break;
}

result = result * 10 + (s[i] - '0');
i++;
}

return (sign *result);
}
