#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int v = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			if (v == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			v = 1;
			node = node->next;
			while (node != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
