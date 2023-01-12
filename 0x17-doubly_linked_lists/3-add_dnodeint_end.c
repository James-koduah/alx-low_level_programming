#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: head of he list
 * @n: initialize
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *p;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	p = *head;
	while (p->next != NULL)
		p = p->next;


	p->next = new;
	new->prev = p;
	return (new);
}
