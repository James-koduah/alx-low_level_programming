#include "lists.h"

/**
 * add_node_end - add a new node at the end of the list
 * @head: the begining of the list;
 * @str: string to be passed
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *h = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (h == NULL)
	{
		h = new;
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
	return (new);
}
