#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of the hash table
 * Return: A hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t*));
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return table;
}
