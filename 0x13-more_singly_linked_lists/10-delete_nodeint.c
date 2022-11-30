#include "lists.h"
/**
 * delete_nodeint_at_index - as the name suggests
 * @head: head of list
 * @index: index of element to be removed
 * Return: 1 if it succeeded of -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold, *h;
	unsigned int i;

	h = *head;

	/*If the head contains nothing, return -1*/
	if (!(*head))
	{
		return (-1);
	}


	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}


	/**
	 * We loop until we are one step behind the node
	 * we want to delete
	 */
	for (i = 0; i < (index - 1); i++)
	{
		if (h)
		{
			h = h->next;
		}
		else
		{
			return (-1);
		}
	}
	/**
	 * h is equal to the node before the index to be deleted
	 *
	 * We want the adress of the node after the node to be deleted
	 * (i.e the next node the node to be deleted is pointing to)
	 *
	 * h is pointing to the node to be deleted
	 * We set h to point to the node after the node to be deleted
	 *
	 * hold contains the node to be deleted,
	 * We free hold
	 */
	hold = h->next;
	h->next = hold->next;
	free(hold);
	return (1);


}
