#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - allocates memory
 * @size: create_arrayksks
 * @c: kskks
 * Return: kskskks
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);


	p = malloc(size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);

}
