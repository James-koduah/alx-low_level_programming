#include "lists.h"

/**
 * insert_nodeint_at_index - as the name suggests
 * @head: of the node
 * @idx: index of the list where the new node should be added.
 * @n: to be given to the n element of the new listint_t node
 * Return: adressof the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;


	for (b = 1; b < idx; b++)
	{
		if (*head)
		{
			*head = (*head)->next;
		}
		else
		{
			return (NULL);
		}
	}
	new->next = (*head)->next;
	(*head)->next = new;
	return (new);
}
