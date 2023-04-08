#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x;

	if (b == NULL)
	{
		return (0);
	}

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		result = 2 * result + (b[x] - '0');
	}

	return (result);
}




