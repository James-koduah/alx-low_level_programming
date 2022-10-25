#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - use atoi
 * @s: kdkdkd
 * Return: dkdkdk
 */
int _atoi(char *s)
{
	int x;
	char *p;
	int v;

	v = 0;

	while (!(s[v] > '0' && s[v] <= '9'))
	{
		v++;
	}
	if (s[v - 1] == '-' || s[v -1] == '+')
	{
		p = &s[v - 1];
	}
	else
	{
		p = &s[v];
	}

	x = atoi(p);
	printf("%d", x);
	
	return (x);
}
