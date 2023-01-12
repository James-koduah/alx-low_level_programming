#include "lists.h"

/**
 * dlistint_len - kdjskjd
 * @h: kskskjdkj
 * Return: ksprint_dlistintkdjjd
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;


	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
