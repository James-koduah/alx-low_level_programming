#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;


	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h->next != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return i;
}
