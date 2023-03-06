#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input value
 * @accept: input value
 * Return: 0;
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
char *p = s;

while (*p != '\0')
{
if (strchr(accept, *p) == NULL)
{
break;
}
len++;
p++;
}
return (len);
}

