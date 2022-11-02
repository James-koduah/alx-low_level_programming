#include <stdio.h>
/**
 * _puts_recursion - kskskskksk
 * @s: kskskkssksk
 * Return: ksksksksk
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		putchar(*s);
	s++;
	_puts_recursion(s);
	}
	else
	{
	putchar('\n');
	}
}
