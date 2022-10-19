#include <stdio.h>
/**
 * times_table - kdkdkdk
 * @c: kdkdkdk
 * Return: kdkdk
 */
int _putchar(char c);
void times_table(void)
{
	int ch;
	int ii;
	int jj;

	for (ch = 0; ch <= 9; ch++)
	{
		for (ii = 0; ii <= 9; ii++)
		{
			jj = ii * ch;
			printf("%d", jj);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
