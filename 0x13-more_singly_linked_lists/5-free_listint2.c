#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: points to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		*head = temp;
		free(*head);
	}

	*head = NULL;
}
