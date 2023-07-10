#include "search_algos.h"


/**
 * linear_search - A search algorithm that uses linear search
 * @array: array to be searched
 * @size: size of array
 * @value: the item we are looking for
 * Return: the index where the item was located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for(i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1); 
}
