#include "hash_tables.h"
/**
 * hash_table_get - get the node
 * @ht: hash table
 * @key: key of node
 * Return: the value of the node
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];


	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
