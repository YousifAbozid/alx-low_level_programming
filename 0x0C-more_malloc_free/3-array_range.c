#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: int
 * @max: int
 * Return: int
*/
int *array_range(int min, int max)
{
if (min > max)
return (NULL);

int *arr = malloc(sizeof(int) * (max - min + 1));

if (arr == NULL)
return (NULL);

for (int i = 0; i <= max - min; i++)
{
arr[i] = min + i;
}
return (arr);
}
