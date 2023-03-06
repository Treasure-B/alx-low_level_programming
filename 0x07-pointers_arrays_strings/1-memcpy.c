#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory is stored
 * @src: copies bytes from memory area
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[r] = src[x];
		n++;
	}
	return (dest);
}

