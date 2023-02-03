#include "hash_tables.h"
/**
 * key_index - gives you the index of the key in the hash table
 * @key: the key
 * @size: the size of the hash table
 * Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index = index % size;
	return (index);

}
