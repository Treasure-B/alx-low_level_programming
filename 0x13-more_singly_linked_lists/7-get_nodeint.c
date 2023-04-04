#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head
 * @index: is the index of the node, starting at 0
 * Return: pointer to the nth, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i = 0;

	while (new != NULL && i < index)
	{
		new = new->next;
		i++;
	}

	return ((i == index) ? new : NULL);
}
