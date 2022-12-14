#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: head of the list
 * @n: number to set the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h;

	h = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
	return (*head);

}
