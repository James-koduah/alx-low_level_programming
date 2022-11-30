#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: head of the list
 * Return: pointer to the head
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *fir, *sec;

	fir = NULL;
	while (*head != NULL)
	{
		sec = (*head)->next;
		(*head)->next = fir;
		fir = *head;
		*head = sec;
	}
	*head = fir;
	return (*head);
}
