#include "lists.h"
/**
 * free_list - free a list
 * @head: the first node
 * Return: null
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head->next);
		free(head);
		head = h;
	}
}
