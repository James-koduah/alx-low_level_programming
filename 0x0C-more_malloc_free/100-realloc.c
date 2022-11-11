#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - imitate realloc
 * @ptr: kksksk
 * @old_size: kskksk
 * @new_size: kskskk
 * Return: skskk
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	char *ptr_new;
	unsigned int i;
	char *fill_mem;

	/*Parameters to prevent fail*/
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (ptr);
	}
	ptr_new = ptr;
	arr = malloc(sizeof(*ptr_new) * new_size);
	if (arr == NULL)
	{
		free(ptr);
	}
	fill_mem = arr;
	for (i = 0; i < new_size; i++)
	{
		fill_mem[i] = *ptr_new++;
	}
	free(ptr);

	return (arr);
}
