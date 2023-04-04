#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the header
 * @idx: the index of the list where the new node should be added
 * @n: int value
 * Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *c_node;
	unsigned int x;

	if (!head)
	{
		return (NULL);
	}
	new_n = malloc(sizeof(listint_t));

	if (!new_n)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}

	c_node = *head;

	for (x = 0; x < idx - 1 && c_node != NULL; x++)
		c_node = c_node->next;

	if (x != idx - 1)
	{
		free(new_n);
		return (NULL);
	}

	new_n->next = c_node->next;
	c_node->next = new_n;

	return (new_n);
}

