#include <stdio.h>
/**
 * _strlen_recursion - sksjksksk
 * @s: kskksksks
 * Return: ksksksksk
 */
int _strlen_recursion(char *s)
{
	int n;
	
	n = 0;
	if (*s != 0)
	{
		n = 1;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
