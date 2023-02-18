#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bet;

	for (bet = 'a'; bet <= 'z'; bet++)
		putchar(bet);
	for (bet = 'A'; bet <= 'Z'; bet++)
		putchar(bet);
	putchar('\n');
	return (0);
}

