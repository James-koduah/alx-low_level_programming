#include "lists.h"


/**
 * list_len - count the number of elements in a linked list
 * @h - linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int b;

	b = 0;
	while (h != NULL)
	{
		b++;
		h = h->next;
	}
	return (b);
}
