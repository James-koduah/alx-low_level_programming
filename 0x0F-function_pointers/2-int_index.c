#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - labalaba
 * @array: ksksksk
 * @size: ksksksk
 * @cmp: kskskks
 * Return: kskksk
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int c;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	c = 0;
	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
			return (i);
	}
	return (-1);
}
