#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int current;
	int x, count = 0;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
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



