#include "lists.h"
/**
 * listint_len - print the interger in each node
 * @h: header of list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int a;

	a = 0;
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
