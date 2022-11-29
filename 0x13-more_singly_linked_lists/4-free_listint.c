#include "lists.h"

/**
 * free_listint - free lists
 * @head: head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}

}
