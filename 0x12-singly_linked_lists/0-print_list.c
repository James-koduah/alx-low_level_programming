#include "lists.h"

/**
 * print_list - print all the elements of a struct
 * @h: pointer ot node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int b;

	/*The first node/struct*/
	printf("[%d] ", h->len);
	if (h->str == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", h->str);
	}
	b = 1;

	/*The second item in the liste which the first points to*/
	printf("[%d] ", h->next->len);
	if (h->next->str == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n",h->next->str);
	}
	b++;
	return (b);
}
