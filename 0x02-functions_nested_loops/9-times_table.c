#include <stdio.h>
/**
 * times_table - kdkdkdk
 * Return: kdkdk
 */
void times_table(void)
{
	int ch;
	int ii;
	int jj;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar('0');
		for (ii = 1; ii <= 9; ii++)
		{
			jj = ii * ch;
			putchar(',');
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
