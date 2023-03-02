#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: a pointer
 */

char *cap_string(char *str)
{
if (str == NULL)
{
return (NULL);
}

for (int i = 0; str[i] != '\0'; i++)
{
if (islower(str[i]) && (i == 0 || isspace(str[i - 1]) ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}'))
{
str[i] = toupper(str[i]);
}
}

return (str);
}
