#include <stdio>
/**
 * print_square - kdksk
 * @size: kdkdk
 * Return: dkdkk
 */
void print_square(int size)
{
	if (size > 0)
	{
		for (int ii = 0; ii < size; ii++)
		{
			for (int jj = 0; jj < size; jj++)
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
