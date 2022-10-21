#include <stdio.h>
/**
 * print_triangle - sjjdkd
 * @size: kdkdk
 * Return: kdkdkdk
 */
void print_triangle(int size)
{
	int ch;
	int ii;
	int jj;
	int sp;
	int ha;

	sp = size - 1;
	ha = 1;

	if (size > 0)
	{
		for (ii = 0; ii < size; ii++)
		{
			for (jj = 0; jj < sp; jj++)
			{
				putchar(' ');
			}
			for (jj = 0; jj < ha; jj++)
			{
				putchar('#');
			}
			ha += 1;
			sp -= 1;
		}
	}
	else
	{
		putchar('\n');
	}
}
