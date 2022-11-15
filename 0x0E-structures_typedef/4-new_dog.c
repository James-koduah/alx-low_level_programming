#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - kskksk
 * @name: ksksk
 * @age: ksksk
 * @owner: ksksk
 * Return: kskskks
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int aa;
	dog_t *bb;

	bb = malloc(sizeof(dog_t));
	if (bb == NULL)
	{
		free(bb);
		return (NULL);
	}
	aa = strlen(name);
	bb->name = malloc(sizeof(char) * aa + 1);
	if (bb->name == NULL)
	{
		free(bb->name);
		free(bb);
		return (NULL);
	}
	bb->name = name;
	bb->age = age;

	aa = strlen(owner);
	bb->owner = malloc(sizeof(char) * aa + 1);
	if (bb->owner == NULL)
	{
		free(bb->owner);
		free(bb->name);
		free(bb);
		return (NULL);
	}
	bb->owner = owner;
	return (bb);
}
