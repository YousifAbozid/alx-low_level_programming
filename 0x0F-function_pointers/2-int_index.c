#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: comparison function
 * Return: index of integer in the array, -1 if fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				break;
			if (!cmp(array[size - 1]))
				return (-1);
		}
		return (i);
	}
	return (-1);
}
