#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input one
 * @s2: input two
 * Return: pointer should point to a newly allocated
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = x = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[x] != '\0')
		x++;

	result = malloc(sizeof(char) * (i + x + 1));

	if (result == NULL)
		return (NULL);

	i = x = 0;

	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	while (s2[x] != '\0')
	{
		result[i] = s2[i];
		i++;
		x++;
	}
	result[i] = '\0';

	return (result);
}
