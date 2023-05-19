#include "search_algos.h"

/**
 * linear_search - A linear search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: item we are searching for
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++ )
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
