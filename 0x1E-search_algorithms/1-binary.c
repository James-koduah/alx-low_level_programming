#include "search_algos.h"
void print_array(int *array, size_t l, size_t r);

/**
 * binary_search - a search algorithm with binary search
 * @array: array to be searched
 * @size: size of the array
 * @value: The value we are looking for
 * Return: the index of the value or -1 if we cannot find it
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	while (left <= right)
	{
		print_array(array, left, right + 1);
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

/**
 * print_array - Used to print out which section of the array we are working on
 * @array: the array
 * @l: the left partition
 * @r: the right partition
 * Return: void
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array:");
	for (i = l; i < r; i++)
	{
		if (i == l)
			printf(" %d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}
