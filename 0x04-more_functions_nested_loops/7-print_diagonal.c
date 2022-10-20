#include <stdio.h>
/**
 * print_diagonal - jkkksks
 * @n: kdkdkdk
 * Return: kdkdkd
 */
void print_diagonal(int n)
{
	int ii;
	int tt;
	int bb;

	tt = 0;
	if (n > 0)
	{
		for (ii = 0; ii < n; ii++)
		{
			for (bb = 0; bb < tt; bb++)
			{
				putchar(' ');
			}
			tt++;
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
