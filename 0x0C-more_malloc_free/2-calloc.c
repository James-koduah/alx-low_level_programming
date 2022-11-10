#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -calloc function imitator
 * @nmemb: kskkss
 * @size: ksksksk
 * Return: ksksks
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	int j;
	int i;


	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (int)nmemb;
	arr = malloc(sizeof(*arr) * j);
	if (arr == NULL)
		return (NULL);
	
	for (i = 0; i < j; i++)
	{
		arr[i] = 0;
	}

	return (arr);

}
