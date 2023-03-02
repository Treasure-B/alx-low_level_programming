#include "main.h"

/**
 * print_number - prints an integer
 * @n: input value
 * Return: void
 */

void print_number(int n)
{
	int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
