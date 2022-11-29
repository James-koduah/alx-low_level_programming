#include "lists.h"

/**
 * free_listint2 - free lists
 * @head: head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *g;

	h = *head;

	while (h)
	{
		g = h->next;
		free(head);
		h = g;
	}
	*head = NULL;
}
