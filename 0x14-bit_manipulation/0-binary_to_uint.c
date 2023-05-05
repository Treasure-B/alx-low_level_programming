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
	int j;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		result = 2 * result + (b[j] - '0');
	}

	return (result);
}

