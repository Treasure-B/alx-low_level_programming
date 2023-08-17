#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the header
 * @idx: the new node should be added. Index starts at 0
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *tmp;
	unsigned int x;

	n_node = NULL;
	if (idx == 0)
		n_node = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		x = 1;
		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (x == idx)
			{
				if (tmp->next == NULL)
					n_node = add_dnodeint_end(h, n);
				else
				{
					n_node = malloc(sizeof(dlistint_t));
					if (n_node != NULL)
					{
						n_node->n = n;
						n_node->next = tmp->next;
						n_node->prev = tmp;
						tmp->next->prev = n_node;
						tmp->next = n_node;
					}
				}
				break;
			}
			tmp = tmp->next;
			x++;
		}
	}

	return (n_node);
}
