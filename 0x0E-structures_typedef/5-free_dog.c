#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - kskks
 * @d: ksksk
 * Return: nine
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
