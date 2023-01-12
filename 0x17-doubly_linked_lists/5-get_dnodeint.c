#include "lists.h"

/**
 * get_dnodeint_at_index - get a not at the index
 * @head: head of list
 * @index: index of node to be returned
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *p;

	p = head;
	while (i < index)
	{
		if (p == NULL)
			return (NULL);
		p = p->next;
		i++;
	}
	return (p);
}
