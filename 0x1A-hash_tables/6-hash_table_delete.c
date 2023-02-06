#include "hash_tables.h"


void hash_node_delete(hash_node_t *node)
{
	hash_node_t *n;
	if (node == NULL)
		return;


	while (node != NULL)
	{
		n = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = n;
	}
}





/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_delete(ht->array[i]);
	}
	free(ht->array);
	free(ht);

}
