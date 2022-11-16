#include <stdio.h>


/**
 * print_name - kskksks
 * @name: ksksk
 * @f: kskskks
 * Return: ksksks
 */

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return; 
	f(name);
}
