#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head)
	{
		f = head;
		head = head->next;
		free(f);
	}
	free(head);
}
