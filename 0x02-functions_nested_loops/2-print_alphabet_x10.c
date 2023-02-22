#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ltr;
	int i;

	i = 0;

	while (i < 10)
	{
		ltr = 'a';
		while (ltr <= 'z')
		{
			_putchar(ltr);
			ltr++;
		}
		_putchar('\n');
		i++;
	}
}

