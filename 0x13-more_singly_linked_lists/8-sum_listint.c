#include "lists.h"
/**
 * sum_listint - sum of the n elements of this list
 * @head: head of the list
 * Return: sum of the list; zero if fail
 */
int sum_listint(listint_t *head)
{
	int b;

	b = 0;
	if (head == NULL)
		return (0);

	while (head)
	{
		b += head->n;
		head = head->next;
	}
	return (b);
}
