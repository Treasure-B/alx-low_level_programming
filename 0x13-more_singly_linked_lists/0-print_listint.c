#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: prints linked lists
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_count++;
		h = h->next;
	}

	return (n_count);
}
