#include <stdio.h>
/**
 * _sqrt_recursion - find the square root of a number
 * @n: number to find square root of
 * Return: square root of @n
 */
int square(int n, int odd);
int _sqrt_recursion(int n)
{
	int b;

	b = 0;
	b = square(n, 1);
	return (b);
}

/**
 * square - kskkssk
 * @n: initial number to be decreased regularly
 * @odd: starts with one and two will be added to get the odd numbers
 * Return: if the process runs through mostly one
 */
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
/*
 * if a after (n - odd)  is less than zero it means
 * the number we were given does not hava a perfect square
 * so we return -1
 */
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

