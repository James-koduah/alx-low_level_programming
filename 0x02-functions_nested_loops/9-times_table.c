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
		for (ii = 0; ii <= 9; ii++)
		{
			jj = ii * ch;
			printf("%d", jj);
			if (ii < 9)
			{
				if (jj <=9)
				{
					printf(",  ");
					printf(" ");
				}
				else
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}
