#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *p;
	unsigned int i = 0;
		
	p = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}

	while (i < (idx - 1))
	{
		if (*h != NULL)
			*h = (*h)->next;
		else
			return (NULL);
		i++;
	}

	new->prev = *h;
	if ((*h)->next)
	{
		((*h)->next)->prev = new;
		new->next = (*h)->next;
	}
	(*h)->next = new;
	*h = p;
	return (new);
}
