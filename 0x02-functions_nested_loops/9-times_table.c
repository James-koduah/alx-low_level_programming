#include <stdio.h>
/**
 * times_table - kdkdkdk
 * Return: kdkdk
 */
void main(void)
{
	int ch;
	int ii;
	int jj;

	for (ch = 0; ch <= 9; ch++)
	{
		for (ii = 0; ii <= 9; ii++)
		{
			jj = ii * ch;
			_putchar((jj / 10) + '0');
			_putchar((jj % 10) + '0');
			if (ii < 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
