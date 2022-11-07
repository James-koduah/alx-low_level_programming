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

	v = strlen(s1);
	a = strlen(s2);
	c = a + v;
	b = malloc(c);
	for (c = 0; c < v - 1; c++)
	{
		b[c] = s1[c];
	}
	v = 0;
	for (v = 0; v < a; v++)
	{
		c++;
		b[c] = s2[v];
	}

	return (b);
}
