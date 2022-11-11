#include <stdio.h>
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

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	arr = ptr;
	ptr = malloc(new_size);



	return (ptr);
}
