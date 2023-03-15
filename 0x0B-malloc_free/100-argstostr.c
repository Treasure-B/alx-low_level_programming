#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: int input
* @av: double pointer array
* Return: 0
*/

char *argstostr(int ac, char **av)
{
int i, j, len = 0, index = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len++;
}
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[index] = av[i][j];
index++;
}
if (i != ac - 1)
{
str[index] = '\n';
index++;
}
}

str[index] = '\0';

return (str);
}

