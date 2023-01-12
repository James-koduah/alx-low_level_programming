#include "lists.h"

/**
 * sum_dlistint - sum of all data in the lists
 * @head: head of the list
 * Return: sum of data else 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int ch = 0;

	p = head;
	if (head == NULL)
		return (0);
	while (p)
	{
		ch += p->n;
		p = p->next;
	}
	return (ch);
}
