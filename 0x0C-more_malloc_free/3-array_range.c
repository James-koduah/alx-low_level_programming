#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - kdkkdkdk
 * @min: kskksksk
 * @max: kskskks
 * Return: kskskks
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	j = 0;
	for (i = min; i <= max; i++)
	{
		j++;
	}

	arr = malloc(sizeof(*arr) * j);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
