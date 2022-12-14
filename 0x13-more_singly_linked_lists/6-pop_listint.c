#include "lists.h"
/**
 * pop_listint - remove the head node of a list
 * @head: head node
 * Return: the head node's data(n);
 */
int pop_listint(listint_t **head)
{
	int b;
	listint_t *new;

	if (*head == NULL)
		return (0);
	new = *head;
	b = new->n;
	*head = new->next;
	free(new);
	return (b);
}
