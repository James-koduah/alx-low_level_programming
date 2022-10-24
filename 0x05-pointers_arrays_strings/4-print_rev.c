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

	for (jj = jj -1; jj > 0; jj--)
	{
		putchar(s[jj]);
	}
	putchar('\n');
}
