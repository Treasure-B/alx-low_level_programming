/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *new;

	count = 0;
	if (head == NULL)
		return (NULL);

	new = head;

	while (new)
	{
		if (index == count)
			return (new);
	count++;
	new = new->next;
	}
	return (NULL);
}
