#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @num: the int that pulls out thelast digit
 * Return: the value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	char last_digit_char = '0' + last_digit;

	_putchar(last_digit_char);
	return (last_digit);
}
