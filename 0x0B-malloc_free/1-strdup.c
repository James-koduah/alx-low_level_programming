#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - kskksk
 * @str: ksksksk
 * Return: ksksk
 */
char *_strdup(char *str)
{
	char *b;
	int c;


	if (str == NULL)
	{
		return (NULL);
	}

	c = strlen(str);
	b = malloc(c + 1);
	if (b == NULL)
	{
		return (NULL);
	}
	strcpy(b, str);
	return (b);
}
