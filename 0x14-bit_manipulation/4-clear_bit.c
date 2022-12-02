#include "main.h"

/**
 * clear_bit - set the bit at a given index
 * @n: number
 * @index: index
 * Return: slsls
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
