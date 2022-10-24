#include <stdio.h>
/**
 * print_rev - print a string form a pointed position
 * @s: kskskks
 * Return: lskdkdk
 */
void print_rev(char *s)
{
	int jj;

	jj = 0;
	while (*s++)
	{
		jj++;
	}

	for (int i = jj - 1; jj > 0; jj--)
	{
		putchar(s[jj]);
	}
	putchar('\n');
}
