#include "lists.h"

/**
 * print_dlistint - kdjskjd
 * @h: kskskjdkj
 * Return: ksprint_dlistintkdjjd
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;


	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
