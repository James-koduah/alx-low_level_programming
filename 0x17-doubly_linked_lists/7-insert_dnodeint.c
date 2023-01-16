#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *new;
	unsigned int i = 0;

	p = *h;
	while (i < (idx - 1))
	{
		if ((p)->next != NULL)
			p = (p)->next;
		else
			return (NULL);
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->prev = p;
	((p)->next)->prev = new;
	new->next = (p)->next;
	(p)->next = new;

	return (new);

}
