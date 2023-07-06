#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int new;
	int z, count = 0;

	for (z = 63; z >= 0; z--)
	{
		new = n >> z;

		if (new & 1)
		{
			printf("1");
			count++;
		}
		else if (count)
			printf("0");
	}
	if (!count)
		printf("0");
}
