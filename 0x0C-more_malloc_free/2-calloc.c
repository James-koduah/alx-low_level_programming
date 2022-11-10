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
	unsigned int *arr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	if (arr == NULL)
		return (NULL);

	return (arr);

}
