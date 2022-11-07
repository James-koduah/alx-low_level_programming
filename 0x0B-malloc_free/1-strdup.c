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

	c = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	b = malloc(c);
	if (b == NULL)
	{
		return (NULL);
	}
	strcpy(b, str);
	return (b);		
}
