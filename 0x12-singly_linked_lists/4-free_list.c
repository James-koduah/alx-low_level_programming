#include "lists.h"
/**
 * free_list - free a list
 * @head: the first node
 * Return: null
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head->next != NULL)
	{
		h = head;
		head = head->next;
		free(h->str);
		free(h->next);
		free(h);
	}
	free(head->next);
	free(head->str);
	free(head);
}
