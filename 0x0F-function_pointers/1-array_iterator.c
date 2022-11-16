#include <stdio.h>
/**
 * array_iterator - kskskks
 * @array: array to iterae through
 * @size: size of ther array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
