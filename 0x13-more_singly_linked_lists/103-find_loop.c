#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: start of linked list
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor, *hare;


	if (head == NULL || head->next == NULL)
		return (NULL);

	tor = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tor == hare)
		{
			tor = head;

			while (tor != hare)
			{
				tor = tor->next;
				hare = hare->next;
			}
			return (tor);
		}

		tor = tor->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
