
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, \n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char cbet;

cbet = 'a';
n = 0;
while
(n < 10)
{
putchar(n + '0');
n++;
}
while
(cbet <= 'f')
{
putchar(cbet);
cbet++;
}
putchar('\n');
return (0);
}
