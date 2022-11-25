#include "lists.h"
/**
 * free_list - free a list
 * @head: the first node
 * Return: null
 */

void free_list(list_t *head)
{
	list_t *h;

	if (head == NULL)
	{
		free(head->str);
		free(head);
	}
	else
	{
	while (head->next != NULL)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
	/*
	 * The last link is not cleared
	 * because it's next node is NULL
	 * so the loop will stop at the last
	 * one hence this removal
	*/
	free(head->str);
	free(head);
	}
}
