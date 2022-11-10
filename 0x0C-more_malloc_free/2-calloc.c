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
	char *arr;



	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = calloc(nmemb, size);	
	return (arr);

}
