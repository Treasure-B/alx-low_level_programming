#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: points to the first element
 * Return: head node’s data (n), or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
