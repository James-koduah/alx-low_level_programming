#include <stdio.h>
/**
 * main - kdkdkkd
 * @c: kdkdk
 * Return: kddjsj
 */
void main(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		main(n / 10);
	}
		putchar((n % 10) + '0');
	
	return (0);
}
