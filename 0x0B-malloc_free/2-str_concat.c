#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - malloc concatate string
 * @s1: ksksk
 * @s2: ksksksk
 * Return: kskskks
 */
char *str_concat(char *s1, char *s2)
{
	char *b;
	int c;
	int v;
	int a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	v = strlen(s1);
	a = strlen(s2);
	c = a + v;
	b = malloc(c + 1);
	if (b == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < v; c++)
	{
		b[c] = s1[c];
	}

	strcat(b, s2);


	return (b);
}
