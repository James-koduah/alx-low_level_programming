#include <stdio.h>
/**
 * print_rev - print a string form a pointed position
 * @s: kskskks
 * Return: lskdkdk
 */
void print_rev(char *s)
{
	int jj;
	int i;

	jj = 0;
	while (s++)
	{
		jj++;
	}

	for (i = jj - 1; i > 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
