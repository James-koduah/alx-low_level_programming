#include <stdio.h>
/**
 * print_square - kdksk
 * @size: kdkdk
 * Return: dkdkk
 */
void print_square(int size)
{
	int ii;
	int jj;

	if (size > 0)
	{
		for (ii = 0; ii < size; ii++)
		{
			for (jj = 0; jj < size; jj++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
