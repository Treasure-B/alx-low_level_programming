#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @str: pointer
 * Return: *str
 */

char *rot13(char *str)
{
char *result = malloc(strlen(str) + 1);
int i, j;

for (i = 0, j = 0; str[i] != '\0'; i++, j++)
{
char c = str[i];

if (c >= 'a' && c <= 'z')
{
c = ((c - 'a') + 13) % 26 + 'a';
}
else if (c >= 'A' && c <= 'Z')
{
c = ((c - 'A') + 13) % 26 + 'A';
}

result[j] = c;
}

result[j] = '\0';

return (result);
}

