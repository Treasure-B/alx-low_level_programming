#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string -  reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
int length = strlen(s);
int i, x;
char tmp;

for (i = 0, x = length - 1; i < x; i++, x--)
{
	tmp = s[i];
	s[i] = s[x];
	s[x] = tmp;
}
}
