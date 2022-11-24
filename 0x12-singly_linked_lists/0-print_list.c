#include "lists.h"

/**
 * print_list - print all the elements of a struct
 * @h: pointer ot node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int b;

	b = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		b++;
	}
	return (b);
}
