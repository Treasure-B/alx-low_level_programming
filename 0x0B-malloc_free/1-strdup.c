#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/

char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
int len = strlen(str);
char *new_str = (char *) malloc(len + 1);
if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, str);
return (new_str);
}
