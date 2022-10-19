#include <stdio.h>
/**
 *  print_times_table - kdkdkdk
 *  @n: dkdkdk
 * Return: kdkdk
 */
void print_times_table(int n)
{
	int ch;
	int ii;
	int jj;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (ch = 0; ch <= n; ch++)
	{
		putchar('0');
		for (ii = 1; ii <= n; ii++)
		{
			jj = ii * ch;
			putchar(',');
			putchar(' ');
			putchar(' ');
			if (jj <= 9)
			{
				putchar(' ');
			}
			printf("%d", jj);
		}
		printf("\n");
	}
}
