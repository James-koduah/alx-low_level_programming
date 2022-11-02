#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - kskskks
 * @s: sksksk
 * Return: skksksk
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
