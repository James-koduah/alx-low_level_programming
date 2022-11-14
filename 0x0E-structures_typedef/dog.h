#ifndef MY_DOG
#define MY_DOG
/**
 * struct dog - first struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#include "main.h"
#endif

