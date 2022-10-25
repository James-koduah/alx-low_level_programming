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
	char a;

	v = 0;

	while (!(s[v] > '0' && s[v] <= '9'))
	{
		if (s[v] == '-')
		{
			a = '-';
		}
		v++;
	}
	if (a == '-')
	{
		s[v - 1] = '-';
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

	
	return (x);
}
