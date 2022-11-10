#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - kkskks
 * @b: kskksksks
 * Return: kskskks
 */
void *malloc_checked(unsigned int b)
{
	int *arr;
	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
