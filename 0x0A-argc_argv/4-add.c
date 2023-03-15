#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int total = 0;
int i;

for (i = 1; i < argc; i++)
{
char *endptr;
int num = strtol(argv[i], &endptr, 10);

if (*endptr != '\0' || num < 0)
{
printf("Error\n");
return (1);
}
total += num;
}
printf("%d\n", total);
return (0);
}
