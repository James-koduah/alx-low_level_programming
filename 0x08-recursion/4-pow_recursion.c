#include <stdio.h>
/**
 * _pow_recursion - kdkdkdk
 * @x: ksksksk
 * @y: kkskks
 * Return: kkskksks
 */
int _pow_recursion(int x, int y)
{
	int ch;

	ch = x;
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 1)
	{
		ch *= _pow_recursion(x, y - 1);
	}
	return (ch);
}
