#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to the binary string.
 *
 * Return: The converted number,
 * or 0 if there is an invalid character or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result * 2) + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
