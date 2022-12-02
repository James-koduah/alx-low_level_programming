#include "main.h"
/**
 * get_bit - get the bit at an index
 * @n: number
 * @index: index of bit (counting from zero)
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	int a;

	if (index > 0)
	{
		for (i = 0; i < index; i++)
		{
			if (n > 1)
			{
				n = n >> 1;
			}
			else
				return (-1);
		}
	}
	if ((n & 1) == 0)
		a = 0;
	else
		a = 1;

	return (a);

}

