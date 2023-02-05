#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: hast table
 * @key: key of element
 * @value: value of key
 * Return: 1 if success 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (key == NULL || ht == NULL || node == NULL || value == NULL || *key = '\0')
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	/* get hash index */
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
