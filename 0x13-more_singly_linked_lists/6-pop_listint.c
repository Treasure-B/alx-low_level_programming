#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: points to the first element
 * Return: head node’s data (n), or 0
 */

int pop_listint(listint_t **head)
{
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	*head = (*head)->next;

	return (num);
}
