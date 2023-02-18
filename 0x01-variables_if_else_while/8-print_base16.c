
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, \n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char cbet;

	for (cbet = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (cbet = 'a'; cbet <= 'f'; cbet++)
	{
		putchar(cbet);
	}
	putchar('\n');
	return (0);
}

