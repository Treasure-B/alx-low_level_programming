#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * linked list
 * @head: pointer to the header
 * @index: node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *new_n;
	unsigned int x;

	new = *head;

	if (new != NULL)
		while (new->prev != NULL)
			new = new->prev;

	x = 0;

	while (new != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = new->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				new_n->next = new->next;

				if (new->next != NULL)
					new->next->prev = new_n;
			}

			free(new);
			return (1);
		}
		new_n = new;
		new = new->next;
		x++;
	}

	return (-1);
}
