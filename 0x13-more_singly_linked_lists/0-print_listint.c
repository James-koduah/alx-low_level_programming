#include "lists.h"
/**
 * print_listint - print the interger in each node
 * @h: header of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int a;

	a = 0;
	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
