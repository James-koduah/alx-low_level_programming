#include <stdio.h>
/**
 * print_rev - print a string form a pointed position
 * @s: kskskks
 * Return: lskdkdk
 */
void print_rev(char *s)
{
	int jj;
	char *i;

	jj = ;
	*i = *s;
	while (*s != 0)
	{
		s++;
		jj++;
	}

	while (jj != 0)
	{
		putchar(*(i + jj));
		jj--;
	}
	putchar('\n');
}
