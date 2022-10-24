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
	while (*s != 0)
	{
		s++;
		jj++;
	}

	while (jj != 0)
	{
		putchar(s[jj]);
		jj--;
	}
	putchar('\n');
}
