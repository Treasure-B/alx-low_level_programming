#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *latest = *head, *next;
	listint_t *prev = NULL;

	while (latest != NULL)
	{
		next = latest->next;
		latest->next = prev;
		prev = latest;
		latest = next;
	}

	*head = prev;
	return (*head);
}

