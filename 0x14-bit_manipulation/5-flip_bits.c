#include "main.h"

/**
 * flip_bits - count the number of bits to be flipped
 * to turn a to b.
 * @n: an integer
 * @m: an integer
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int op, bits;

	op = n ^ m;
	bits = 0;

	while (op > 0)
	{
		bits += op & 1;
		op = op >> 1;
	}
	return (bits);
}
