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



	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (int)nmemb;
	arr = malloc(j * size);
	if (arr == NULL)
		return (NULL);
	






	return (arr);

}
