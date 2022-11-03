#include <stdio.h>
/**
 * _sqrt_recursion - lslls
 * @n: ksksksks
 * Return: kskskks
 */
int square(int n, int odd);
int _sqrt_recursion(int n)
{
	int b;

	b = 0;
	b = square(n, 1);
	return (b);
}

int square(int n, int odd)
{
	int a;
	int c;

	c = 1;
	if (n == odd)
	{
		return (1);
	}

	a = 0;
	a = n - odd;
	if (a <= 0)
	{
		return (-1);
	}
	c += square(a, odd + 2);
	if (c == 0)
	{
		return (-1);
	}
	return (c);
}

