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
int *arr, i;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));

if (arr == NULL)
return (NULL);

for (i = 0; i <= max - min; i++)
{
arr[i] = min + i;
}
return (arr);
}
