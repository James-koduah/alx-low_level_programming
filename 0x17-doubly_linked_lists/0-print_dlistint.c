#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;


	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return i;
}
