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
	hash_node_t *node;
	hash_node_t *head;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);
	/* get hash index */
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (head == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = head;
		head = node;
	}
	return (1);
}
