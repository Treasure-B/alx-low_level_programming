#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 * @head: points to the elements
 * @index: the node that should be deleted, Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *last;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	last = NULL;

	for (x = 0; current != NULL && x < index; x++)
	{
		last = current;
		current = current->next;

	}

	if (current == NULL)
		return (-1);

	if (last == NULL)
	{
		*head = current->next;
	} else
	{
		last->next = current->next;
	}

	free(current);
	return (1);

}
