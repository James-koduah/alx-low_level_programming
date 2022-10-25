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
	while (s[jj] != 0)
	{
		jj++;
	}
	while (jj > 0)
	{
		putchar(s[jj]);
		jj--;
	}
	
	putchar('\n');
}
