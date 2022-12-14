#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - ksksk
 * @width: kskks
 * @height: kskks
 * Return: kskksk
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
	{
		for (i = 0; i < width; i++)
		{
			arr[b][i] = 0;
		}
	}
	return (arr);
}
