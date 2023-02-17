#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer
 * Return: Always 0 (success)
 */
int main(void)
{
printf("The size of char is %ld bytes.\n", sizeof(char));
printf("The size of int is %ld bytes.\n", sizeof(int));
printf("The size of long int is %ld bytes.\n", sizeof(long));
printf("The size of long long int is %ld bytes.\n", sizeof(long long));
printf("The size of float is %ld bytes.\n", sizeof(float));
return (0);
}
