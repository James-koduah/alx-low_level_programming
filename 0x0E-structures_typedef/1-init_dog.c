#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialze the struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: names of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
