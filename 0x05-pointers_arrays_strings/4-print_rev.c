#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string to be printed in rev
 * Return: void
 */

void print_rev(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
while (len > 0)
{
s--;
putchar(*s);
len--;
}
putchar('\n');
}

